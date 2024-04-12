#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);

    printf("ASCII Value of %c is %d \n", c, (int)c);
    return 0;
}