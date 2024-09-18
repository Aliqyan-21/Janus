#include "janus.hpp"
#include <iostream>

int main(void) {
  std::cout << "Testing Janus Library\n";
  std::cout << "Addition: 3 + 4 = " << Janus::add(3, 4) << std::endl;
  std::cout << "Subtraction: 10 - 5 = " << Janus::subtract(10, 5) << std::endl;
  std::cout << "Multiplication: 6 * 7 = " << Janus::multiply(6, 7) << std::endl;

  try {
    std::cout << "Division: 8 / 2 = " << Janus::divide(8, 2) << std::endl;
    std::cout << "Division: 8 / 0 = " << Janus::divide(8, 0)
              << std::endl; // Will throw an exception
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  try {
    std::cout << "Factorial: 0 = " << Janus::factorial(0) << std::endl;
    std::cout << "Factorial: 1 = " << Janus::factorial(1) << std::endl;
    std::cout << "Factorial: 20 = " << Janus::factorial(20) << std::endl;
    std::cout << "Factorial: 21 = " << Janus::factorial(21) << std::endl;
    // std::cout << "Factorial: -1 = " << Janus::factorial(-1) << std::endl;
  } catch (const std::invalid_argument &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  return 0;
}
