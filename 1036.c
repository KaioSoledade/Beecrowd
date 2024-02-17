#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, calculo1, calculo2, calculo3, raiz;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    calculo1 = (B*B) - 4*A*C;
    raiz = sqrt(calculo1);

    calculo2 = (-B - raiz) / (2*A);
    calculo3 = (-B + raiz) / (2*A);


    if( calculo1 <= 0 || raiz == B){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n", calculo3);
        printf("R2 = %.5lf\n", calculo2);
    }

}