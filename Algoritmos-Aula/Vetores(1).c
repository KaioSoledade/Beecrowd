#include <stdio.h>

int main()
{
    int a, b, c, d, i;
    int vetor[10];
   
    a=0;
    b=0;
    c=0;
    d=0;
    i=0;
   
    while(i<10){
        printf("Digite um valor: ");
        scanf("%d", &a);
        vetor[i] = a;
       
       
        if(i == 0){
            b = vetor[i];
            d = vetor[i];
        }
       
        if(vetor[i] > b){
            b = vetor[i];
        }
        if(vetor[i] < d){
            d = vetor[i];
        }
       
        i++;
    }
   
   

   
    printf("O maior eh: %d\n", b);
    printf("O menor eh: %d\n", d);



}
