#include "matrix.h"

int main(int argc, char **argv) {
    // read size of matrix
    if (argc != 2) {
        std::cerr << "Error. Usage:\n"
                  << argv[0] << " M \n"
                  << "M : Rows = Columns\n";
        return 1;
    }
    const int M = std::stoi(argv[1]);
    const int N = M;

    // create matrix A
    std::vector<double> A(M*N);

    // fill matrix
    fill_hilbert(A, M, N);

    // compute trace
    double trace = 0.0;
    trace = compute_trace(A, M, N);

    // print matrix
    print_matrix(A, M, N);
    // print trace
    std::cout << "Trace: " << trace << "\n";

    return 0;
}
