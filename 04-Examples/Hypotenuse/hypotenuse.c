#include <stdio.h>
#include <math.h>

int main () {

    double A, B, C;

    printf("Digite o valor do lado A: ");
    scanf("%lf", &A);

    printf("Digite o valor do lado B: ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));

    printf("O lado C mede: %lf\n", C);

    return 0;
}