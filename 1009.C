                 
#include <stdio.h>

int main()
{
    char name[30];
    double salario, venda ,conta, TOTAL;
    
    scanf("%s ", &name);
    scanf("%lf", &salario);
    scanf("%lf", &venda);

    
    conta = (venda*15)/100;
    TOTAL = conta + salario;
    
    printf("TOTAL = R$ %.2lf\n", TOTAL);
};