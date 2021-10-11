#include "easy.h"

int itc_skv(int num1)
{
    if (num1 > 0)
        return num1 * num1;
    return -1;
}

int itc_spr(int num1, int num2)
{
    if (num1 > 0 && num2 > 0)
        return num1 * num2;
    return -1;
}

int itc_str(int num1, int num2, int num3)
{
    if (num1 <= 0 || num2 <= 0 || num3 <= 0)
        return -1;
    if ((num1 + num2 < num3) || (num2 + num3 < num1) || (num1 + num3 < num2))
        return -1;
    int half, num4;
    half = num1 + num2 + num3;
    half = half / 2;
    num4 = half * (half - num1) * (half - num2) * (half - num3);
    if (itc_sqrt(num4) <= 0)
        return -1;
    return itc_sqrt(num4);
}

double itc_scir(int num1)
{
    double res;
    if (num1 >= 0) {
        res = (num1 * num1) * 3.14;
        return res;
    }
    return -1;
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
