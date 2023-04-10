#include <iostream>
#include <vector>
#include <algorithm>

void derivate(const std::vector<double> & original,
              std::vector<double> & deriv);

int main(int argc, char *argv[])
{
  // vector for the first polynomial
  std::vector<double> p1 = {1, 3, 4.5};
  // vector for the derivated polynomial
  // WARNING: the size can be 0 if the first polynomial is a constant
  std::vector<double> p2;
  p2.resize(p1.size() - 1); 

  // compute the derivative
  derivate(p1, p2);

  // print polynomials
  auto print = [](double x) { std::cout << x << " "; };
  std::cout << "p1 = {";
  std::for_each(p1.begin(), p1.end(), print);
  std::cout << "}\n";
  std::cout << "p2 = {";
  std::for_each(p2.begin(), p2.end(), print);
  std::cout << "}\n";

  return 0;
}

void derivate(const std::vector<double> & original,
              std::vector<double> & deriv)
{
  for(int ii = 0; ii < deriv.size(); ii++) {
    deriv[ii] = original[ii+1]*(ii+1);
  }
}
