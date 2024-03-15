#include <stdio.h>

int main()
{
    double a, b, c, d, e, f;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    
    scanf("%lf %lf", &a, &b);
    
    if(a==0 && b==0){
        printf("Origem\n");
    }
    if(a==0 && b!=0){
        printf("Eixo Y\n");
    }
    if(b==0 && a!=0){
        printf("Eixo X\n");
    }
    
    
    
    
    if(a!= 0 && b!=0){
        if(a<0 && b<0){
            printf("Q3\n");
        }
        if(a>0 && b>0){
            printf("Q1\n");
        }
        if(a<0 && b>0){
            printf("Q2\n");
        }
        if(a>0 && b<0){
            printf("Q4\n");
        }
    }
    
    
    

};
