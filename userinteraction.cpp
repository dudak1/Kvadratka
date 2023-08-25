#include "prototypes.h"
#include <format>
#include "consts.h"

#pragma warning(disable : 4996)

/**
*      Prints roots
*
*      @param nRoots Quantity of roots
*      @param x1     First root
*      @param x2     Second root
*/
void PrintRoots(int nRoots, double x1, double x2) {
    switch (nRoots) {
    case 0:
        ModdedPrint("No roots", 15);
        break;
    case 1:
        ModdedPrint(std::format("One root: {}", x1), 15);
        break;
    case infinity:
        ModdedPrint("Infinite quantity of roots", 15);
        break;
    default:
        ModdedPrint(std::format("Two roots: {} {}", x1, x2), 15);
        break;
    }
}

/**
*      Gets coefficients of square equation
*
*      @param coeffs Struct, in which coefficients will be sign up
*
*      Using scanf
*/
void EnterCoeffs(struct coefficients* coeffs) {
    ModdedPrint("Enter coefficients of equation a, b, c, in one string, separated with space\n", 15);
    scanf("%lf %lf %lf", &coeffs->a, &coeffs->b, &coeffs->c);
}