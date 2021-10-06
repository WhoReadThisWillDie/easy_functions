#include "easy.h"

int itc_abs(int num1)
{
    if (num1 >= 0){
        return num1;
    }
    return -num1;
}

double itc_fabs(double num1)
{
    if (num1 >= 0){
        return num1;
    }
    return -num1;
}

int itc_revnbr(int num1)
{
    int num2 = 0;
    num2 = (num1 % 10) * 100 + ((num1 % 100) / 10) * 10 + num1 / 100;
    return num2;
}

bool itc_iseven(int num1)
{
    if (num1 % 2 == 0){
        return true;
    }
    return false;

}
