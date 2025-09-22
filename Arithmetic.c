#include <stdio.h>
int main (){

    int int1, int2, sum, diff, prod, mod;
    float quo;
    printf("Enter first number: ");
    scanf("%d", &int1);
    printf("Enter first number: ");
    scanf("%d", &int2);

    sum = int1 + int2;
    diff = int1 - int2;
    prod = int1 * int2;
    mod = int1 % int2;
    quo = (float)int1 / (float)int2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Remainder: %d\n", mod);
    printf("Quotient: %.2f\n", quo);

    return 0;
}