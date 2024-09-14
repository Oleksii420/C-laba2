#include <stdio.h>
#include <math.h>

int main() {

    double x;
    scanf("%lf", &x);
    double gauss = exp(-x*x);
    double derivative = -2 * x * exp(-x*x);

    printf("%lf\n%lf\n",gauss, derivative );

    return 0;

}