#include <stdio.h>
#include <math.h>

double bhaskara (double delta, double a, double b, int flag) {
    return (double) ((-1 * b) + (flag * sqrt(delta))) / (2 * a);
}


int main () {

    double a, b, c;

    printf("Valores de A, B e C: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = pow(b, 2) + (-4 * a * c);

    if (delta > 0) {
        printf("x1: %lf\n", bhaskara(delta, a, b, 1));
        printf("x2: %lf\n", bhaskara(delta, a, b, -1));
    } else if (delta == 0) {
        printf("x: %lf\n", bhaskara(delta, a, b, 1));
    } else {
        printf("Delta negativo!");
    }

    return 0;
}