#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n<0) printf("Entered number is negative \n");
    else printf("Entered Number is positive \n");

    return 0;
}