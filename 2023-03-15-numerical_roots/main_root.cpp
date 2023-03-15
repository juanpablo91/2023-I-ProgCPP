#include <iostream>
#include "roots.h"


int main(int argc, char **argv) {
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);
  
  
  double x0 = 0.98;
  double eps = 1.0e-7;
  int NMAX = 1000;
  int niter = 0;

  auto flambda = [](double x){ return std::exp(-x) - x; };
  double root = newton(x0, eps, flambda, NMAX, niter); 
  std::cout << root
            << "\t" << flambda(root)
            << "\n";

  auto glambda = [](double x){ return std::sin(x) - x; };  
  root = newton(x0, eps, glambda, NMAX, niter); 
  std::cout << root
            << "\t" << glambda(root)
            << "\n";

  return 0;
}
