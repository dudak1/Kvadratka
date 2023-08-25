#include <iostream>

void SortRoots(double unsorted_x1, double unsorted_x2, double* x1, double* x2);
int solver(struct coefficients coeffs, double* x1, double* x2);
void ModdedPrint(std::string text, int color);
int TestALL();
int TestOne(const struct TestData* data);
void PrintRoots(int nRoots, double x1, double x2);
void EnterCoeffs(struct coefficients* coeffs);
