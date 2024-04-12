#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n*n -n;

    int dig = 1;
    while(n){
        n/=10;
        dig*=10;
    }

    if(temp%10 == 0) printf("-------- Automophic ---------\n");
    else printf("---------Not Automorphic number -----------\n");
}