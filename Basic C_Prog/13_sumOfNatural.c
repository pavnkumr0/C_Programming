#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    long long sum = n*(n+1)/2;

    printf("Sum from 1 to %d  : %d \n", n, sum );

    return 0;

}