#include <iostream>
#include <vector>
#include <string>
#include "matrix.h"

int main(int argc, char **argv) {
  if (argc != 3) {
      std::cerr << "Error. Usage:\n"
                << argv[0] << " M N\n"
                << "M : Rows\n"
                << "N : Columns\n";
      return 1;
  }
  const int M = std::stoi(argv[1]);
  const int N = std::stoi(argv[2]);

  // allocate memory for the matrix
  std::vector<double> A(M*N), B(N*M), C(M*M);

  // initialize the matrix
  // TODO: make this a function
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < N; ++j) {
      A[i*N + j] = i + j;
    }
  }
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      B[i*M + j] = 2*i + j;
    }
  }

  // multiply the matrices
  // TODO: Make this a function
  matmul_naive(A, B, M, N, C);

  // print the result
  print_matrix(A, M, N);
  print_matrix(B, N, M);
  print_matrix(C, M, M);

  return 0;
}
