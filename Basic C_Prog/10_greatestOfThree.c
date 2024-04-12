#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    printf("Enter Three number: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a > c) printf("a is greater than b and c \n");
    else if(b>a && b>c) printf("b is greater than a and b \n");
    else printf("c is greater than a and b \n");

    return 0;

}