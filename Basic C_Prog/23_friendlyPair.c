/*
Friendly pairs are two numbers with a common abundancy index, the
ratio between the sum of divisors of a number and the number itself
i.e f(n)/n. So, two number n and m are friendly number if
i. f(n)/n = f(m)/m.
1. where f(n) is the sum of divisors of n.
b. Eg: n  6, m  28
i. (1 + 2 + 3 + 6)/6  (1 + 2 + 4 + 7 + 14 + 28)/28
ii. (12/6) = (56/28)
*/

#include <stdio.h>
#include <stdlib.h>

int factorSum(int n){
    int sum = 0;
    for(int i=1; i<=n; ++i){
        if(n%i == 0) sum+= i;
    }
    return sum;
}

int main(){

    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    if(factorSum(a)*b == factorSum(b)*a){
        printf("-------Friendly Pair ----------\n");
    }
    else printf("---------Not a Friendly Pair ----------- \n");

    return 0;
}