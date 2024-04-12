#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev = 0;
    int b = n;
    while(n){
        rev = rev*10 + n%10;
        n/=10;
    }

    if(b == rev) printf("-------Palindrome------- \n");
    else printf("-------- Not Palindrome ------- \n");
}