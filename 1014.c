#include <stdio.h>

int main(){
    float x, y, z;
    scanf("%f", &x);
    scanf("%f", &y);

    z = x/y;

    printf("%.3f km/l\n", z);
}