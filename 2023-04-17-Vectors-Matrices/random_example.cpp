#include <iostream>
#include <random>

int main() {
    //std::random_device rd; // obtain a random seed from hardware
    //std::mt19937 eng(rd()); // seed the generator
    std::mt19937 eng(0); // seed the generator
    std::uniform_int_distribution<> distr(1, 6); // define the range

    int random_number = distr(eng); // generate a random number
    std::cout << "Random number: " << random_number << std::endl;
    random_number = distr(eng); // generate a random number
    std::cout << "Random number: " << random_number << std::endl;
    random_number = distr(eng); // generate a random number
    std::cout << "Random number: " << random_number << std::endl;
    random_number = distr(eng); // generate a random number
    std::cout << "Random number: " << random_number << std::endl;
    random_number = distr(eng); // generate a random number
    std::cout << "Random number: " << random_number << std::endl;

    return 0;
}
