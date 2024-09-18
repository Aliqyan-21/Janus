#include "janus.hpp"
#include <stdexcept>

namespace Janus {
long long add(float a, float b) { return a + b; }

long long subtract(float a, float b) { return a - b; }

long long multiply(float a, float b) { return a * b; }

float divide(float a, float b) {
  if (b == 0) {
    throw std::invalid_argument("Division by zero is undefined.");
  }
  return a / b;
}

long long factorial(int n) {
  if (n < 0)
    throw std::invalid_argument("Cannot compute factorial of negative number");

  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}
} // namespace Janus
