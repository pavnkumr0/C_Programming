#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int sum = 0;
    while(num){
        sum+= num%10;
        num/=10;
    }

    printf("Sum of the digits: %d \n", sum);

    return 0;
    
}