#pragma once
#include <iostream>
#include <vector>
void print_matrix(const std::vector<double> & M, int nrows, int ncols);
// computes C = AB
void matmul_naive(const std::vector<double> & A,
                  const std::vector<double> & B,
                  const int nrows, const int ncols,
                  std::vector<double> & C);
