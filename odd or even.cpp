#include <stdio.h>

int main() {
    int numCount;

    printf("Enter the number of elements: ");                     //JEGAN L.M
    scanf("%d", &numCount);                                       //192221057

    int numbers[numCount];

    printf("Enter %d numbers:\n", numCount);
    for (int i = 0; i < numCount; i++) {
        scanf("%d", &numbers[i]);                                 
    }

    printf("Odd/Even analysis:\n");
    for (int i = 0; i < numCount; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even\n", numbers[i]);
        } else {
            printf("%d is odd\n", numbers[i]);
        }
    }

    return 0;
}
