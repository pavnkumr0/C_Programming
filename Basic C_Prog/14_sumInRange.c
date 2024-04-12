#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = 0;
    if(a>b)  {
        printf("entered range is Invalid \n");
        return 0;
    }
    else {
        for(a; a<=b; a++) sum+= a;
    }

    printf("Sum in a given range: %d \n", sum);

    return 0;

}