// Calcular la norma de un vector
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

double norm(const std::vector<double> & v);
void fill(std::vector<double> & v);

int main(int arg, char **argv) {
  const int N = 100;
  
  // declarar el vector de datos
  std::vector<double> data;
  data.resize(N);
  
  // llenarlo con algo
  fill(data);

  // imprimir la norma
  std::cout << norm(data) << "\n";
  return 0;
}

void fill(std::vector<double> & v) {
  //for (int ii = 0; ii < v.size(); ++ii) {
  //v[ii] = ii;
  //}
  std::iota(v.begin(), v.end(), 0.0);
}

double norm(const std::vector<double> & v) {
  // norma = \sqrt{\sum_i v_i^2}
  double result = 0.0;
  for (int ii = 0; ii < v.size(); ++ii) {
    result += v[ii]*v[ii];
  }
  result = std::sqrt(result);
  return result;
}
