#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <random>

// declaraciones de mis funciones

void fill_randomly(std::vector<double> & v);
void print(const std::vector<double> & v,
           std::string & fname);
