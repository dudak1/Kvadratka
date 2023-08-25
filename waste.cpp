#include <stdio.h>
#include <string>

int get_num() {
    char symbol = '1';
    char num[100] = {};
    int counter = 0;
    while ((symbol = getchar()) != '\n') {
        if (!(isdigit(symbol)) && symbol != '-' && symbol != '.') {
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

void get_coeffs(char data[], double* a, double* b, double* c) {
    char a_list[100] = {}, b_list[100] = {}, c_list[100] = {};
    int counter = 0, delta = 0;
    char symbol = ' ', * end;
    for (int i = 0; i < 100; i++) {
        symbol = data[i];
        if (symbol == '\n') {
            counter++;
            delta = i - 1;
        }
        switch (counter) {
        case 0:
            a_list[i] = symbol;
            break;
        case 1:
            b_list[i - delta] = symbol;
            break;
        case 2:
            c_list[i - delta] = symbol;
            break;
        case 3:
            *a = strtod(a_list, &end);
            *b = strtod(b_list, &end);
            *c = strtod(c_list, &end);
            break;
        }
    }
}