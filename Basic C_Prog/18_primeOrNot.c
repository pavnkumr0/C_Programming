#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=2; i<n; ++i){
        if(n%i == 0){
            printf("---------Not a Prime Number--------- \n");
            return 0;
        }
    }

    printf("--------- Prime Number --------- \n");
    return 0;

}