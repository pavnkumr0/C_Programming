#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char c;
    printf("Enter a Character: ");
    scanf("%c",&c);

    c = tolower(c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("Entered Character is a Vowel");
    }
    else printf("Entered Char is a consonant");

    return 0;
}

