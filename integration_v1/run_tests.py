"""
Test Runner - Orchestrates all testbenches for integration_v1
"""

import os
import subprocess
import sys
from pathlib import Path


class TestRunner:
    """Runs testbenches with different configurations."""
    
    def __init__(self, integration_path="/Users/fanshenglee/Desktop/127_NOC/integration_v1"):
        self.integration_path = integration_path
        self.test_output_dir = os.path.join(integration_path, "test_output")
        self.results = {}
    
    def setup(self):
        """Create output directories."""
        os.makedirs(self.test_output_dir, exist_ok=True)
        print(f"Test output directory: {self.test_output_dir}")
    
    def run_test(self, module_name, test_name=None):
        """Run a specific test.
        
        The Makefile already ensures that `make sim` will rebuild the firmware
        first, but calling this method will explicitly issue a `make firmware`
        invocation ahead of the simulation to make the dependency obvious.

        Args:
            module_name: Python module (test_memory_dump, test_image_load, etc.)
            test_name: Specific test function (if None, runs all)
            
        Returns:
            (passed: bool, output: str)
        """
        os.chdir(self.integration_path)
        # ensure firmware is up to date before running any simulation
        subprocess.run(["make", "firmware"], cwd=self.integration_path)
        
        # Build Cocotb command
        cmd = ["make", "sim"]
        
        if test_name:
            cmd.extend([f"MODULE={module_name}", f"TESTNAME={test_name}"])
        else:
            cmd.append(f"MODULE={module_name}")
        
        print(f"\n{'='*60}")
        print(f"Running: {' '.join(cmd)}")
        print(f"{'='*60}")
        
        try:
            result = subprocess.run(cmd, capture_output=True, text=True, timeout=60)
            passed = result.returncode == 0
            output = result.stdout + result.stderr
            
            self.results[module_name] = {
                'passed': passed,
                'returncode': result.returncode,
                'output': output
            }
            
            return passed, output
        except subprocess.TimeoutExpired:
            print(f"ERROR: Test timed out (60s)")
            return False, "TIMEOUT"
        except Exception as e:
            print(f"ERROR: {e}")
            return False, str(e)
    
    def run_all_tests(self):
        """Run all testbenches."""
        tests = [
            ("test_memory_dump", None),
            ("test_output_verification", None),
        ]
        
        print("\n" + "="*60)
        print("INTEGRATION_V1 TEST SUITE")
        print("="*60)
        
        for module, test in tests:
            passed, _ = self.run_test(module, test)
            status = "✓ PASS" if passed else "✗ FAIL"
            print(f"{status}: {module}")
        
        self.print_summary()
    
    def print_summary(self):
        """Print test summary."""
        print("\n" + "="*60)
        print("TEST SUMMARY")
        print("="*60)
        
        passed_count = sum(1 for r in self.results.values() if r['passed'])
        total_count = len(self.results)
        
        for test_name, result in self.results.items():
            status = "✓" if result['passed'] else "✗"
            print(f"{status} {test_name}")
        
        print(f"\nTotal: {passed_count}/{total_count} passed")
        
        if passed_count == total_count:
            print("\n🎉 ALL TESTS PASSED!")
            return 0
        else:
            print(f"\n⚠️  {total_count - passed_count} test(s) failed")
            return 1


def main():
    """Main test runner."""
    runner = TestRunner()
    runner.setup()
    runner.run_all_tests()


if __name__ == "__main__":
    main()
