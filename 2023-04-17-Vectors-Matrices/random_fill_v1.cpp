// llenar un vector con numeros aleatorios

#include <iostream>
#include <string>
#include <vector>
#include "random_vector.h"

int main(int argc, char **argv) {

  // read variables
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " N" << std::endl;
    std::cerr << "N: size of the vector" << std::endl;
    return 1;
  }
  const int N = std::stoi(argv[1]);

  // set the vector
  std::vector<double> data;
  data.resize(N);

  // fill the vector
  fill_randomly(data);

  // print the vector
  std::string fname = "data.txt";
  print(data, fname);

  return 0;
}
