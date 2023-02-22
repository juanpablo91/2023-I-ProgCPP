#include <iostream>

bool is_prime(int m); // declaration

int main(void)
{
  const int N = 40;
  int counter = 0;
  int p = 0;
  for (p = 2; ; p++) {
    if (is_prime(p) and is_prime(p+6)) {
      counter++;
      if (counter == N) {
        break;
      }
    }
  }
  // print
  std::cout << "(" << p << ", " << p+6 << ")\n";

  return 0;
}


bool is_prime(int m) // implementation
{
  bool isprime = true;
  for (int ii = 2; ii*ii <= m; ii++ ) {
    if (m%ii == 0) {
      isprime = false;
      break;
    }
  }
  return isprime;
}
