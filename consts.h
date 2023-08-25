const int infinity = 3;

struct coefficients {
    double a, b, c; ///< coefficients a, b, c
};

struct TestData {
    double a, b, c; ///< coefficients a, b, c
    double x1, x2; ///< two roots of square equation
    int nRoots; ///< quantity of roots
};
