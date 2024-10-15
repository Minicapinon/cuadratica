#ifndef OPERATIONS

#include <cmath>

//Funcion solo para X1
double cuadx1(double a, double b, double c)
{
    double x1 = 0;

    x1 = ((b)*(-1))+sqrt((b*b)-(4*a*c));

    x1 /= 2*a;

    return x1;
}

//Funcion solo para X2
double cuadx2(double a, double b, double c)
{
    double x2 = 0;

    x2 = ((b)*(-1))-sqrt((b*b)-(4*a*c));

    x2 /= 2*a;

    return x2;
}


#endif //OPERATIONS
