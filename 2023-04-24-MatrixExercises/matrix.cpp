#include "matrix.h"
void print_matrix(const std::vector<double> & M, int nrows, int ncols){
    std::cout.setf(std::ios::scientific);
    std::cout.precision(15);

    for (int ii = 0; ii < nrows; ++ii) {
        for (int jj = 0; jj < ncols; ++jj) {
            std::cout << M[ii*ncols + jj] << " "; // (ii, jj) = ii*NCOLS + jj
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
void fill_matrix_random(std::vector<double> & M, const int nrows, const int ncols, const int seed){
    std::mt19937 gen(seed);
    std::uniform_real_distribution<> dis(-1, 1);
    for (int ii = 0; ii < nrows; ii++){
        for (int jj = 0; jj < ncols; jj++){
            M[ii*ncols + jj] = dis(gen);
        }
    }
    
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


double compute_trace(const std::vector<double> & A,
                     const int nrows, const int ncols){
    assert(ncols == nrows);
    double result = 0.0;
    for (int ii = 0; ii < ncols; ii++){
        result += A[ii*nrows + ii];
    }
    return result;
}
void fill_hilbert(std::vector<double> & A,
                  const int nrows, const int ncols){
    assert(ncols == nrows);
    for (int ii = 0; ii < ncols; ii++){
        for (int jj = 0; jj < ncols; jj++){
            A[ii*ncols + jj] = 1.0/(ii + jj + 1.0);
        }
    }
}
