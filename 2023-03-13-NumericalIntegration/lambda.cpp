#include <iostream>

double myfun2(double x, double a);

int main(int argc , char **argv)
{
  double alocal = 3.4;
  auto f = [alocal](double x){return alocal+x;}; // lambda function

  std::cout << myfun2(5.32, 3.4) << "\n";
  std::cout << f(5.32) << "\n";

  return 0;
}

double myfun2(double x, double a)
{
  return a+x;
}
