/*
A perfect number is a positive integer that is equal
to the sum of its positive divisors, excluding the number itself.
a. For example, 6 is a positive number that is completely divisible by 1, 2,
and 3. We know that the number is also divisible by itself but we will
include it in the addition of divisors. When we add these divisors 
(1 + 2 + 3 = 6).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int temp = 0;

    for(int i=1; i<n; ++i){
        if(n%i == 0) temp+= i;
    }

    if(temp == n) printf("----- Perfect Number ----- \n");
    else printf("------ Not a Perfect Number ------ \n");
}