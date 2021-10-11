#include "easy.h"

int itc_skv(int num1)
{
    return itc_abs(num1 * num1);
}

int itc_spr(int num1, int num2)
{
    return itc_abs(num1 * num2);
}

double itc_str(double num1, double num2, double num3)
{
    double half;
    double num4;

    half = (num1 + num2 + num3) / 2;
    num4 = half * (half - num1) * (half - num2) * (half - num3);
    return itc_sqrt(num4);
}

double itc_scir(int num1)
{
    double res;

    res = (num1 * num1) * 3.14;
    return res;
}

double itc_pow(int num1, int num2)
{
    int num3 = num1;

    if (num2 > 0){
        for (int i = 1; i < num2; i++){
            num1 = num1 * num3;
        }
        return num1;
    }
    else if (num2 == 0)
        return 1;
    else {
        for (int i = -1; i > num2; i--){
            num1 = num1 * num3;
        }
        return 1.0 / num1;
    }
}
