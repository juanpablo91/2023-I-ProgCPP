#include <iostream>
#include <array>
#include <vector>

int main(void) {
  const long N = 400000;
  std::cout << "Probando con N: " << N << "\n";

  //std::array<double, N> data;
  //std::cout << data[0] << "\n";

  std::vector<double> data;
  data.resize(N);
  std::cout << data[0] << "\n";

  return 0;
}
