#include "matrix.h"
void print_matrix(const std::vector<double> & M, int nrows, int ncols){
    for (int ii = 0; ii < nrows; ++ii) {
        for (int jj = 0; jj < ncols; ++jj) {
            std::cout << M[ii*ncols + jj] << " "; // (ii, jj) = ii*NCOLS + jj
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
// computes C = AB
void matmul_naive(const std::vector<double> & A,
                  const std::vector<double> & B,
                  const int nrows, const int ncols,
                  std::vector<double> & C) {
    for (int ii = 0; ii < nrows; ++ii){
        for (int jj = 0; jj < nrows; ++jj) {
            C[ii*nrows + jj] = 0;
            for (int kk = 0; kk < ncols; ++kk) {
                C[ii*nrows + jj] += A[ii*ncols + kk] * B[kk*nrows + jj];
            }
        }
    }
}
