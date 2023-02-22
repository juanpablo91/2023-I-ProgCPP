#include <iostream>

bool is_prime(int m); // declaration

int main(void)
{
  const int N = 40;
  int counter = 0;
  int p = 0;
  for (p = 2; ; p++) {
    // check if p is prime
    bool p_is_prime = is_prime(p);
    if (p_is_prime) {
      // check if p+6 is prime
      bool p6_is_prime = is_prime(p+6);
      if (p6_is_prime) {
        counter++;
        if (counter == N) {
          break;
        }
      }
    }
    //if(p > 100000) break; // guard
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
