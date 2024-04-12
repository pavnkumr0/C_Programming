#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Entered number : %d \n", n);

    int temp = 0;
    while(n){
        temp = temp*10 + n%10;
        n/=10;
    }
        printf("Reversed number : %d \n", temp);

    

}