#include <iostream>

int main(void)
{
  const int N = 40;
  int counter = 0;
  int p = 0;
  for (p = 2; ; p++) {
    // check if p is prime
    bool p_is_prime = true;
    for (int ii = 2; ii*ii <= p; ii++ ) {
      if (p%ii == 0) {
        p_is_prime = false;
        break;
      }
    }
    if (p_is_prime) {
      // check if p+6 is prime
      bool p6_is_prime = true;
      for (int ii = 2; ii*ii <= p+6; ii++ ) {
        if ((p+6)%ii == 0) {
          p6_is_prime = false;
          break;
        }
      }
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
