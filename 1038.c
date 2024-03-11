#include <stdio.h>

void calcular(int A, int B){
    if(A == 1){
        printf("Total: R$ %.2f\n", (4.00 * B) );
    }
    if(A == 2){
        printf("Total: R$ %.2f\n", (4.50 * B) );
    }
    if(A == 3){
        printf("Total: R$ %.2f\n", (5.00 * B) );
    }
    if(A == 4){
        printf("Total: R$ %.2f\n", (2.00 * B) );
    }
    if(A == 5){
        printf("Total: R$ %.2f\n", (1.50 * B) );
    }
}


int main()
{
    int lanche, quant;
    scanf("%d %d", &lanche, &quant);
    
    calcular(lanche, quant);

    return 0;
}
