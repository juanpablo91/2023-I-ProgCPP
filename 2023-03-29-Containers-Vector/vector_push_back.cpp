#include <vector>
#include <iostream>


int main(void) {
  std::vector<double> v;
  v.resize(1);
  v[0] = -0.987;
  std::cout << v[0] << "\n";
  std::cout << v.size() << "\n";
  
  v.push_back(2.345);
  std::cout << v[1] << "\n";
  std::cout << v.size() << "\n";

  v.push_back(1.0);
  std::cout << v[2] << "\n";
  std::cout << v.size() << "\n";

  v.push_back(2.0);
  std::cout << v[3] << "\n";
  std::cout << v.size() << "\n";

  v.push_back(3.0);
  std::cout << v[4] << "\n";
  std::cout << v.size() << "\n";

  return 0;
}