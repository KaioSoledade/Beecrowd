#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, e;
    scanf("%f %f", &a, &b);
    scanf("%f %f", &c, &d);

    e = (a - c)*(a - c) + (b - d)*(b - d);
    e = sqrt(e);

    printf("%.4f\n", e);
};