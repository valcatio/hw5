#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
    double x,y,z;
    
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    double res = (pow(y + cbrt(x - 1.0), 0.25)) / (fabs(x - y) * (sin(z) * sin(z) + tan(z)));

    printf("res = %.5f\n", res);

}