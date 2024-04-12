#include <stdlib.h>
#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    printf("%d\n", (int)c);

    if((c >= 65) && (c <= 90)) printf("------- Upper Case ------- \n");
    else if((c >= 97) && (c <= 122)) printf("------- Lower Case --------- \n");
    else printf("------ Special Character ------ \n");

    return 0;
}