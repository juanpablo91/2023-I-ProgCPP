#include <iostream>

int n{0}; // variable global NO LO HAGAN
//const int n{0}; // constante global SI LO PUEDEN HACER

void fun(void);

int main(void) {

  std::cout << "Enter a number: ";
  std::cin >> n;

  fun();

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

void fun()
{
  //int n{0}; // variable local
  n = -1;
}
