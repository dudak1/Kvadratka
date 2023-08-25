#include <math.h>
#include "consts.h"
#include "prototypes.h"


/**
*      Sortes roots of quadratic equation
*
*      @param  unsorted_x1 First root
*      @param  unsorted_x2 Second root
*      @param  x1          Pointer to the less root
*      @param  x2          Pointer to the bigger root
*
*      After working x1 consists less root, x2 bigger root
*/
void SortRoots(double unsorted_x1, double unsorted_x2, double* x1, double* x2) {
    if (unsorted_x1 > unsorted_x2) {
        *x1 = unsorted_x2;
        *x2 = unsorted_x1;
    }
    else {
        *x1 = unsorted_x1;
        *x2 = unsorted_x2;
    }
}

/**
*      Solves a square equation ax^2+bx+c=0
*
*      @param [in] coeffs a, b, c coefficients
*      @param [out] x1    Pointer to the less root
*      @param [out] x2    Pointer to the bigger root
*
*      @return Quantity of roots
*
*      In case of infinite quantity of roots, returns infinity
*/
int solver(struct coefficients coeffs, double* x1, double* x2) {
    double d = 0;
    if (coeffs.a == 0) {
        if (coeffs.b == 0) {
            return (coeffs.c == 0) ? infinity : 0;
        }
        else {
            *x1 = *x2 = (-coeffs.c) / coeffs.b;
            return 1;
        }
    }
    else {
        d = coeffs.b * coeffs.b - 4 * coeffs.a * coeffs.c;
        if (d < 0.0) {
            return 0;
        }
        else if (d == 0.0) {
            *x1 = *x2 = (-coeffs.b) / 2 / coeffs.a;
            return 1;
        }
        else {
            double unsorted_x1 = 0, unsorted_x2 = 0;
            double sqrt_d = sqrt(d);
            unsorted_x1 = (-coeffs.b + sqrt_d) / 2 / coeffs.a;
            unsorted_x2 = (-coeffs.b - sqrt_d) / 2 / coeffs.a;
            SortRoots(unsorted_x1, unsorted_x2, x1, x2);
            return 2;
        }
    }
}