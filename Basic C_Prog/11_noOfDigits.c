#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    size_t digits = 0;
    while(n){
        digits++;
        n/=10;
    }

    printf("The number of digits: %d \n", digits);
    return 0;
}