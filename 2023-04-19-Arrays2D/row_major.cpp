// REF: https://scicomp.stackexchange.com/questions/37264/how-much-space-store-a-matrix-of-numbers
#include <iostream>

int main(int argc, char **argv) {
  const int N = 4;
  int m[N][N] = {0.0}; //4 by4 matrix with all zeros (default value for ints) allocated on the stack
  for (unsigned int i = 0; i < N; ++i) {
    for (unsigned int j = 0; j < N; ++j) {
      std::cout << &m[i][j] << "\t";
    }
    std::cout << "\n";
  }
  return 0;
}
