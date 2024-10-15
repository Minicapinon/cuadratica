/*
    Este archivo solo se utiliza para realizar operaciones
    usando funciones para calcular el valor de "X1" y "X2"
*/
#ifndef OPERATIONS

#include <cmath>

double cuadx1(double a, double b, double c)
{
    double x1 = 0;

    x1 = ((b)*(-1))+sqrt((b*b)-(4*a*c));

    x1 /= 2*a;

    return x1;
}

double cuadx2(double a, double b, double c)
{
    double x2 = 0;

    x2 = ((b)*(-1))-sqrt((b*b)-(4*a*c));

    x2 /= 2*a;

    return x2;
}


#endif //OPERATIONS
