#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    long long factorial = 1;
    for(int i = 1; i<=n; ++i) factorial*=i;

    printf("Factorial : %d \n", factorial);
    return 0;
}