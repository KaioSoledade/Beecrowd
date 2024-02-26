#include <stdio.h>
#include <string.h>

int main()
{
    int L;
    L = 10;
    char nome1[L], nome2[L];
    int i;
   
    printf("Fale seu nome\n\n");
    scanf(" %[^\n]s", nome1);
    //[^\n] "Guarde tudo na string até você o compilador encontrar o enter(\n)"
    scanf(" %[^\n]s", nome2);
   
    if(strcmp(nome1, nome2) == 0){
        printf("São Iguais\n");
    } else{
        printf("São diferentes\n");
    }
   
    while(i<10){
        printf("%c", nome1[i]);
        i++;
    }
    printf("\n");
    i=0;
    while(i<10){
        printf("%c", nome2[i]);
        i++;
    }

    return 0;
   
}
