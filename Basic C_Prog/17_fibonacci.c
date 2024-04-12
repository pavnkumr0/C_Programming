#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for(int i=2; i<n; ++i){
        arr[i] = arr[i-1]+arr[i-2];
    }

    for(int i=0; i<n; ++i){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;

}