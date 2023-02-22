#include <iostream>
#include <string>

bool is_prime(int m); // declaration

int main(int argc, char **argv)
{
  if (argc != 2) {
    std::cout << "ERROR. Usage:\n"
              << argv[0] << " val\n"
              << "val: nth pair of sexy prime\n";
    return 1;
  }
  const int N = std::stoi(argv[1]);
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
//! @param: m
bool is_prime(int m) // implementation
{
  bool isprime = true; ///< Brief description after the member
  for (int ii = 2; ii*ii <= m; ii++ ) {
    if (m%ii == 0) {
      isprime = false;
      break;
    }
  }
  return isprime;
}
