#pragma once

// DECLARACIONES
#include <cmath>

using fptr=double(double);
using algptr = double(fptr, const double, const double, const int);

double simpson(fptr func, const double a, const double b, const int npoint);

double richardson(algptr alg, fptr func, const double a, const double b,
                  const int npoint, int order);
