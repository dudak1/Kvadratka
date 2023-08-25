#include "prototypes.h"
#include "consts.h"
#include <iostream>

/**
*      Tests correct work of solver
*
*      @param  data Data or type struct TestData
* 
*      @return 0 if test failed, else 1
*
*      After working print information to console
*/
int TestOne(const struct TestData* data) {
    double x1 = 0, x2 = 0;
    int nRoots = solver({ data->a, data->b, data->c }, &x1, &x2);
    if (x1 != data->x1 || x2 != data->x2 || nRoots != data->nRoots) {
        printf("Failed: x1=%lf, x2=%lf, nRoots=%lf expected x1Ref=%lf, x2Ref=%lf, nRootsRef=%lf\n",
            x1, x2, nRoots, data->x1, data->x2, data->nRoots);
        return 0;
    }
    else {
        printf("Test OK\n");
        return 1;
    }
}

/**
*      Starts all tests of solver
*
*      @return quantity of completed tests
*
*/
int TestALL() {
    int nOk = 0;
    const int nTests = 3;
    struct TestData data[nTests] = { {1, 0, -4, -2, 2, 2},
                                     {0, 0, 0, 0, 0, infinity},
                                     {0, 0, 3, 0, 0, 0} };
    for (int i = 0; i < nTests; i++) {
        nOk += TestOne(&data[i]);
    }
    return nOk;
}