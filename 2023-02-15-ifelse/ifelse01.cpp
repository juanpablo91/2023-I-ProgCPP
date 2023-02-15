#include <iostream>

int main(void) {

  int n{0};
  std::cout << "Enter a number: ";
  std::cin >> n;

  if (n > 10) {
    std::cout << n << " is greater than 10"
              << "\n";
  } else {
    std::cout << n << " is less than or equal to 10"
              << "\n";
    std::cout << "This line is always executed"
              << "\n";
  }

  return 0;
}
