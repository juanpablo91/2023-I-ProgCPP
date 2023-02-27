// main(int argc, charg **argv)
// leet el x y el numero de terminos
// llamar a la funcion e imprimir el valor mio y el teorico y la diff percent

#include <iostream>
#include <cmath>

double mysin(double x, int nterms);
int factorial(int m);

int main(int argc, char **argv)
{
  double x {0.0};
  int NTERMS{0};

  if(argc != 3) {
    std::cerr << "ERROR.\nUsage:\n" << argv[0] << " x nterms\n";
    return 1;
  }
  
  x = std::stod(argv[1]);
  NTERMS = std::stoi(argv[2]);

  double exact = std::sin(x);
  double myval = mysin(x, NTERMS);
  std::cout << NTERMS << "\t" << myval << "\t"
            << exact << "\t" << std::fabs(1.0 - myval/exact) 
            << "\n";
  
  return 0;
}

// funcion mysin(double x, int nterms)
//   loop k <= nterms
//     total += std::pow(-1, k)*std:pow(x, 2*k+1)/factorial(2*k+1)
//   return total
double mysin(double x, int nterms)
{
  double total = 0.0;
  for(int k = 0; k <= nterms; ++k) {
    total += std::pow(-1, k)*std::pow(x, 2*k+1)/factorial(2*k+1);
  }
  return total;
}

// factorial(int m)
//   result = 1
//   for k <= m
//     result *= k
//   return result
int factorial(int m)
{
  int result = 1;
  for (int k = 2; k <= m; ++k) {
    result *= k;
  }
  return result;
}
