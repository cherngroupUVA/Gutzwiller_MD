//
//  util.hpp
//  pyro-kondo-chain
//
//  Created by Gia-Wei Chern on 5/6/16.
//  Copyright © 2016 Gia-Wei Chern. All rights reserved.
//

#ifndef util_hpp
#define util_hpp

#include <stdio.h>
#include <math.h>

#define ARMA_DONT_USE_WRAPPER
#include <armadillo>

#include "units.hpp"
#include "vec3.hpp"

const double PI = acos(-1.0);

typedef std::mt19937 RNG;


typedef float flt;
// typedef double flt;
typedef std::complex<flt> cx_flt;
typedef std::complex<double> cx_double;

const cx_double _I(0, 1);

void select_sort(double *a, int _L);

void select_sort(double *a, int _L, int *idx);

void init_srand(void);

inline double rand1(void) {
    //return ((double) rand())/((double) RAND_MAX);
    return drand48();
}

int mod(int x, int m);

double fermi_density(double x, double kT, double mu);

double fermi_density_deri(double x, double kT, double mu);

double Lorentzian(double x, double eta);

#endif /* util_hpp */
