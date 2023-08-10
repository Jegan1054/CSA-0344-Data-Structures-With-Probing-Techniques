#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            return i;
    return -1;
}

int main() {                                                               //JEGAN L.M
    int size, target;                                                      //192221057

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to be searched: ");
    scanf("%d", &target);

    int result = linearSearch(arr, size, target);

    printf(result != -1 ? "Number %d found at index %d.\n" : "Number %d not found in the array.\n", target, result);

    return 0;
}
