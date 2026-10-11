#include <stdio.h>
#include <math.h>

void main() {
    double x,y,z;
    
    scanf_s("%lf", &x);
    scanf_s("%lf", &y);
    scanf_s("%lf", &z);

    double res = (pow(y + cbrt(x - 1.0), 0.25)) / (fabs(x - y) * (sin(z) * sin(z) + tan(z)));

    printf("res = %.5f\n", res);

}