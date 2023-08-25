#include "prototypes.h"
#include "consts.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#pragma warning(disable : 4996)


/**
*      Get correct number from console
*
*      @return Gotten number
*
*      In case of uncorrect enter, print about this and do recursion, while dont return number
*/
int get_num() {
    char symbol = '1';
    char num[100] = {};
    int counter = 0;
    while ((symbol = getchar()) != '\n' && counter != 99) {
        if ((!(isdigit(symbol)) && symbol != '-' && symbol != '.') ||
            (symbol == '-' && counter != 0)) {
            printf("Uncorrect enter\n");
            while (getchar() != '\n')
                ;
            return get_num();
        }
        else {
            num[counter] = symbol;
        }
        counter += 1;
    }
    return atof(num);
}

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
        printf("No roots");
        break;
    case 1:
        printf("One root: %lf", x1);
        break;
    case infinity:
        printf("Infinite quantity of roots");
        break;
    default:
        printf("Two roots: %lf %lf", x1, x2);
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
    printf("Enter coefficients of equation a, b, c, in different strings\n");
    coeffs->a = get_num();
    coeffs->b = get_num();
    coeffs->c = get_num();
}
