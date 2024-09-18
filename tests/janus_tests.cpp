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

  std::cout << "Factorial: 21 = " << Janus::factorial(21) << std::endl;
  return 0;
}
