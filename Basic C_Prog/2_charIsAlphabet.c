#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    printf("Enter a Character: ");
    scanf("%c",&c);
    c = tolower(c);
    if(c >= 97 && c <= 122){
        printf("-----------Alphabet------------- \n");
    }
    else{
        printf("-----------Not an alphabet--------- \n");
    }

    return 0;
}