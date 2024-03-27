                 
#include <stdio.h>

int main()
{
    int uni1, uni2, quant1, quant2;
    double preco1, preco2, TOTAL;
    
    scanf("%d", &uni1);
    scanf("%d", &quant1);
    scanf("%lf", &preco1);


    scanf("%d", &uni2);
    scanf("%d", &quant2);
    scanf("%lf", &preco2);

    
    TOTAL = quant1*preco1 + quant2*preco2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
};