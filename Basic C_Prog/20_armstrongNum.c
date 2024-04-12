/*

Armstrong number is a number that is equal to the sum of cubes of
its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong
numbers.
b. 153  1*1*1+5*5*5  +3*3*3
c. 1+125+27 = 153   

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    int dig;
    int b = n;
    while(n){
        dig = n%10;
        sum += dig*dig*dig;
        n /= 10;
    }

    if(b == sum) printf("-----Armstrong----- \n");
    else printf("----- Not Armstrong ------ \n"); 

    return 0;
}
