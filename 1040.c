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
    
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    a = a*2;
    b = b*3;
    c = c*4;
    d = d*1;
    
    e = (a+b+c+d)/10;
    
    printf("Media: %.1lf\n", e);
    if(e >= 7.0){
        printf("Aluno aprovado.\n");
    }
    if(e < 5.0){
        printf("Aluno reprovado.\n");
    } 
    if(e >= 5.0 && e < 7.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &f);
        printf("Nota do exame: %.1lf\n", f);

        e = (e+f)/2;
        if(e >= 5.0){
            printf("Aluno aprovado.\n");
        }
        if(e < 5.0){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", e);
    }
    

    
    
    

}
