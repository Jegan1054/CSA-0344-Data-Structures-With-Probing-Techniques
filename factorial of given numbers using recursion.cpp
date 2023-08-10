#include <stdio.h>
                  
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1; 
    } else {      
        return num * factorial(num - 1);
    }                                                                     //JEGAN L.M
}                                                                         //192221057
                   
int main() {      
    int num;      
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
                  
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {      
        unsigned long long result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }             
                  
    return 0;     
}                 
                  