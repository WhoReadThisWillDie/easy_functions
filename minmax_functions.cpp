#include "easy.h"

int itc_max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

int itc_min(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    return num2;
}

double itc_fmax(double num1, double num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

double itc_fmin(double num1, double num2)
{
    if (num1 < num2)
        return num1;
    return num2;
}

int itc_sqrt(int num1)
{
    for (int i = 0; i <= 10000; i++){
        if (i * i == num1)
            return i;
    }
    return -1;
}
