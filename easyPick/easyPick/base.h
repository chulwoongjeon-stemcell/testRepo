
#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED

#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <cstdlib>

using namespace std;

//  define precision by commenting out one of the two lines:

typedef double reals;       //  defines reals as double (standard for scientific calculations)

typedef long long integers;

//   next define some frequently used constants:
const reals One=1.0,Two=2.0,Three=3.0,Four=4.0,Five=5.0,Six=6.0,Ten=10.0;

const reals Pi=3.141592653589793238462643383L;
const reals REAL_MAX=numeric_limits<reals>::max();
const reals REAL_MIN=numeric_limits<reals>::min();
const reals REAL_EPSILON=numeric_limits<reals>::epsilon();

//   next define some frequently used functions:

template<typename T>
inline T SQR(T t) { return t*t; };

#endif