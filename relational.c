#include <stdio.h>
int main (){
    int int1, int2;
    printf("Enter first integer: ");
    scanf("%d", &int1);
    printf("Enter second integer: ");
    scanf("%d", &int2);

    if (int1 > int2){
        printf("First Integer is greater than the Second Integer");
    } else if (int1 < int2) {
        printf("First Integer is less than the Second Integer");
    } else if (int1 = int2) {
        printf("Both numbers are equal in value");
    }
    
    return 0;
    }