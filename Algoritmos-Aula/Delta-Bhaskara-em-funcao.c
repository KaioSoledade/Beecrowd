#include <stdio.h>
#include <math.h>

double bhaskara1(double A, double B, double C){
    double calculo1 = (B*B) - 4*A*C;
    return calculo1;
}
double bhaskara2(double A, double B, double C, double raiz){
    double calculo2 = (-B - raiz) / (2*A);
    return calculo2;
}
double bhaskara3(double A, double B, double C, double raiz){
    double calculo3 = (-B + raiz) / (2*A);
    return calculo3;
}
int main(){
    double A, B, C, calculo1, calculo2, calculo3, raiz;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    calculo1 = bhaskara1(A, B, C);
    raiz = sqrt(calculo1);
    calculo2 = bhaskara2(A, B, C, raiz);
    calculo3 = bhaskara3(A, B, C, raiz);



    if( calculo1 <= 0 || raiz == B){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n", calculo3);
        printf("R2 = %.5lf\n", calculo2);
    }

}