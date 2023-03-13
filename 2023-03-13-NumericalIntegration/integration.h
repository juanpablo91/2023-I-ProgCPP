#pragma once
// DECLARACIONES
#include <cmath>

using fptr=double(double);

double simpson(fptr func, const double a, const double b, const int npoint);
