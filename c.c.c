#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i, Ui, Uj, Un;

    do {
        printf("Give me a number n (greater than or equal to 2): ");
        scanf("%d", &n);
    } while (n < 2);

    Ui = 1;
    Uj = 0;

    printf("Fibonacci series up to %d terms:\n", n);

    for (i = 2; i <= n; i++) {
        Un = Ui + Uj;
        printf("%d ", Un);
        Uj = Ui;
        Ui = Un;
    }

    return 0;
}
