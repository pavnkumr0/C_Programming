#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2) printf("Entered number is a Odd number\n");
    else printf("Entered number is a Even number \n");

    return 0;
}