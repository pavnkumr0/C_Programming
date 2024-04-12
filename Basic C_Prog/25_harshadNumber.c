/*
a. If a number is divisible by the sum of its digits then it will be known
as a Harshad Number.
b. For example:
i. 156 is divisible by the sum 12 of its digits 1, 5, 6.
ii. 54, 120
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int temp = n;
    int sum = 0;
    while(n){
        sum+= n%10;
        n/=10;
    }
    if(temp%sum == 0) printf("--------Harshad Number ---------- \n");
    else printf("----------- Not a Harshad Number ---------- \n");

    return 0;
}