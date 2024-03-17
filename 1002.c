#include <stdio.h>

int main(){
    double arm1;
    double pi = 3.14159;

    scanf("%lf\n", &arm1);
    printf("A=%.4lf\n", (arm1*arm1)*pi );
 
    return 0;
};