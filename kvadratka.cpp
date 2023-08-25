#include "prototypes.h"
#include "consts.h"
#include "prototypes.h"

int main()
{
    TestALL();
    coefficients coeffs = {0, 0, 0};
    double x1 = 0, x2 = 0;
    EnterCoeffs(&coeffs);
    int nRoots = solver(coeffs, &x1, &x2);
    PrintRoots(nRoots, x1, x2);
}
