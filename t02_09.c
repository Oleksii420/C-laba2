#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main() {

    double a, b, c, r;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &r);
    double A = a * (PI / 180);
    double B = b * (PI / 180);
    double C = c * (PI / 180);

    double numerator = sin(A) * sin(B) * sin(C);
    double denominator = sin((A + B + C) / 2);
    double s = r * r * numerator / denominator;
    printf("%.2lf\n", s);

    return 0;

}