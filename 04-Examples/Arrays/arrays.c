#include <stdio.h>


int main () {
    double grades[5];
    double average = 0;

    printf("Digite as notas: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &grades[i]);
        average += grades[i];
    }

    printf("A média é: %.1lf\n", average / 5);
}