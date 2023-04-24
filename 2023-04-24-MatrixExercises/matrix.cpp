void printMatrix(const std::vector<double> & M, int nrows, int ncols){
    for (int ii = 0; ii < nrows; ++ii) {
        for (int jj = 0; jj < ncols; ++jj) {
            std::cout << C[ii*M + jj] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
