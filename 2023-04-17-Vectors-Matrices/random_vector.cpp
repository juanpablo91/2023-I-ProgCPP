#include "random_vector.h"

void fill_randomly(std::vector<double> & v)
{
  const int SEED = 0;
  std::mt19937 eng(SEED); // seed the generator
  //std::uniform_real_distribution<double> dis(1.0, 2.0);
  std::normal_distribution<double> dis(5.0, 2.0);

  for(auto & val : v) { // & to modify the vector
    val = dis(eng);
  }
}  
void print(const std::vector<double> & v,
           std::string & fname)
{
  std::ofstream fout(fname);

  for(auto val : v) {
    fout << val << "\n";
  }
}
