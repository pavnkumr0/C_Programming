#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a = %d   b = %d \n", a,b);

    if(a > b) printf("--------- a is greater than b ----------\n");
    else printf("---------- b is greater than a --------- \n");

    return 0;
}