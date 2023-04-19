#include <iostream>
#include <vector>

int main(int argc, char **argv) {
  // TODO: later read this from the cmd line
  const int M = 3;
  const int N = 4;

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
  for (int ii = 0; ii < M; ++ii){
    for (int jj = 0; jj < M; ++jj) {
      C[ii*M + jj] = 0;
      for (int kk = 0; kk < N; ++kk) {
        C[ii*M + jj] += A[ii*N + kk] * B[kk*N + jj];
      }
    } 
  }

  // print the result
  for (int i = 0; i < M; ++i) {
    for (int j = 0; j < M; ++j) {
      std::cout << C[i*M + j] << " ";
    }
    std::cout << std::endl;
  }
  
  return 0;
}
