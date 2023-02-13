#include <iostream>

// variable:
// - tipo de dato
// - nombre
// - scope o alcance
// - direccion de memoria

int main(void) {

  double x = 2.134;
  std::cout << x << "\n";
  std::cout << &x << "\n";  

  {
    double x = -2.134;
    std::cout << x << "\n";
    std::cout << &x << "\n";  
  }

  std::cout << x << "\n";

  return 0;
}
