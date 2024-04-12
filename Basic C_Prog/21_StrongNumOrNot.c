/*

A strong number is one in which the factorial of each
digit of a number equals the original number's sum. Eg: 145

*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    int f = 1;
    for(int i=1; i<=n; i++) f*=i;
    return f;
}

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int sum = 0;
    int b = n;
    while(n){
        sum += factorial(n%10);
        n/=10;
    }
    
    if(sum == b) printf("-------Strong Number ------ \n");
    else printf("------- Not a Strong Number -------- \n");
}