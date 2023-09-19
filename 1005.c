#include <stdio.h>
 
int main() {
 
double A, B;

scanf("%lf\n", &A);
scanf("%lf\n", &B);

printf("MEDIA = %.5lf\n", (((A*3.5) + (B*7.5))/(3.5 + 7.5)));
    return 0;
    
}