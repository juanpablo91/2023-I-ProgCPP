#include <array>
#include <vector>
#include <iostream>


int main(void) {
  std::array<double, 3> a;
  std::vector<double> v;
  
  a[1] = 9.8;
  
  v.resize(5);
  v[3] = -0.987;

  std::cout << v[3] << "\n";

  return 0;
}