#include <stdio.h>
#include <string.h>

int main()
{
    char texto[30], letra;
    int i=0;
    int a=0;
   

    printf("Digite um texte: \n");
    scanf(" %[^\n]s ", &texto);
    printf("Digite a letra\n");
    scanf(" %c", &letra);
   
    int tam = strlen(texto);
   
   
    for(i=0;i<tam;i++){

        if(texto[i] == letra){
            a++;
        }
    }
   
    printf("a letra (%c) aparece %d vezes no texto:\n %s\n", letra, a);


    return 0;
   
}
