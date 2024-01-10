#include <iostream>

using namespace std;

int number_of_possibilities(int n, int limit) {
  if (n < 0 || limit < 0) {
    throw invalid_argument("n and limit must be non-negative.");
  }

  int factorial = 1;
  for (int i = 1; i <= limit + 1; i++) {
    factorial *= i;
  }

  int denominator = 1;
  for (int i = 1; i <= n - 1; i++) {
    denominator *= i;
  }

  denominator *= limit - n + 1;

  return factorial / denominator;
}

int main() {
  int n = 5;
  int limit = 2;

  cout << number_of_possibilities(n, limit) << endl;

  return 0;
}
