#include "stdio.h"
#include <windows.h>
#include <iostream>

/**
*      Print colored text
*
*      @param  text   Printable text
*      @param  color  Color of text
*/
void ModdedPrint(std::string text, int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    printf(text.c_str());
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}