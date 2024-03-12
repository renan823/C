#include <stdio.h>

int main () {

    const double PI = 3.141596;

    double radius, circunference;

    printf("Digite o raio: ");
    scanf("%lf", &radius);

    circunference = 2 * PI * radius;

    printf("A circunferência é de: %lf\n", circunference);

    return 0;
}