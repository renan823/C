#include <stdio.h>

int main () {

    double value, discount;

    printf("Digite o valor gasto: ");
    scanf("%lf", &value);

    if (value >= 200) {
        discount = 0.2;
    } else if (value > 100) {
        discount = 0.1;
    } else {
        discount = 0.05;
    }

    printf("Valor da compra R$: %.2lf\n", value - (value * discount));

    return 0;
}