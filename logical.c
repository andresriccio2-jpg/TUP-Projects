#include <stdio.h>
int main (){

    int num, upperLim, lowerLim;
    upperLim = 50;
    lowerLim = 10;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= lowerLim && num <= upperLim) {
        printf("Your number is between 10 and 50");
    } else {
        printf("Your number is not between 10 and 50");
    }

    return 0;
}