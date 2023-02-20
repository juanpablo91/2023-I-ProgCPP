#include <iostream>

int main(void) {
  int ii = 0;
  for(ii = 0; ii < 10; ii++) {
    //std::cout << ii << "\t";
    if (ii >= 7) {
      //std::cout << "message\n";
      continue;
      //break;
    }
     if (ii != 4) {
       std::cout << ii;
    }
    std::cout << "\n";
  }
  return 0;
}
