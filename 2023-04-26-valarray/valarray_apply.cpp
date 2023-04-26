#include <iostream>
#include <valarray>
#include <cmath>

int main()
{
	std::valarray<int> v = {1,2,3,4,5,6,7,8,9,10};

    double suma = v.sum();

    v = v.apply([](int n){
        if (n%2 == 0)
            return 3*n;
        else
            return 2*n;
    });
    std::cout << v[0] << " " << v[1] << "\n";
    //v.apply([](int n){std::cout << n << " "; });
    //std::cout << "\n";
  	std::cout << suma << "\n";

  	return 0;
}
