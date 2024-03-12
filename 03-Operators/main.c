#include <stdio.h>
#include <stdbool.h>

float sum (a, b) {
    return (float) a + b;
}

int main () {

    bool isAlive = true;
    bool isBirthday = true;

    int age = 10;

    if (isAlive) {
        if (isBirthday) {
            printf("happy birthday!\n");
            age++;
        }
    } else {
        printf("Good bye\n");
    }

    printf("%.2f\n", sum(2, 3));

    return 0;
}