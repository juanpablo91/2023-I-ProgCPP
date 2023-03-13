// g++ -std=c++17 -g -fsanitize=undefined main_integration.cpp integration.cpp

// integrate two different functions
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include "integration.h"

double myfun(double x);
double myfun2(double x);

int main(int argc , char **argv)
{
  std::cout << simpson(myfun, 0, M_PI, 100) << "\n";
  std::cout << simpson(myfun2, 0, M_PI, 100) << "\n";

  return 0;
}

double myfun(double x)
{
  return std::sin(x);
}

double myfun2(double x)
{
  return std::sin(x*x);
}
