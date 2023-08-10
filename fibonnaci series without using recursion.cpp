#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Fibonacci series is not defined for non-positive numbers.\n");              //JEGAN L.M
    } else {                                                                                //192221057
        int fib[num + 1];

        fib[0] = 0;
        fib[1] = 1;

        for (int i = 2; i <= num; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        printf("Fibonacci series of %d numbers:\n", num);
        for (int i = 0; i <= num; i++) {
            printf("%d ", fib[i]);
        }
        printf("\n");
    }

    return 0;
}
