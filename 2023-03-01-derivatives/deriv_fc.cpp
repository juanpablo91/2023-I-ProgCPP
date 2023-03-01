#include <fstream>
#include <cmath>

double f(double x);
double deriv_forward(double x, double h);
double deriv_central(double x, double h);

int main(int argc, char **argv) {
  const double x = M_PI/3.0; 
  const double exact = std::cos(x);

  std::ofstream fout("datos.txt"); 
  for(int p = -1; p >= -18; p--) {
    double h = std::pow(10.0, p);
    double forward = deriv_forward(x, h);
    double central = deriv_central(x, h);
    fout << h
         << "\t" << std::fabs(1.0 - forward/exact)
         << "\t" << std::fabs(1.0 - central/exact)
         << "\n";
  }
  fout.close();
  
  return 0;
}

double f(double x)
{
  return std::sin(x);
}

double deriv_forward(double x, double h)
{
  return (f(x+h) - f(x))/h;
}

double deriv_central(double x, double h)
{
  return (f(x+h/2) - f(x-h/2))/h;
}
