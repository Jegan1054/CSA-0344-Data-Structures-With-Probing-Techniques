  #include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {                                                               //JEGAN L.M
        printf("Factorial is not defined for negative numbers.\n");              //192221057
		    } else if (num == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
                                                                                
