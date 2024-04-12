#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    double pi = 2*asin(1.0);
    printf("The area of the circle is %f  \n", pi*r*r);

    return 0;

}