#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    i=0;
    char Frase[200];
    char letra = 'l';
    char letra2 = 'r';
    char letra3 = 'L';
    char letra4 = 'R';
    
    printf("Pode falar o que quiser meu mano Cebolinha:\n");
    scanf("%[^\n]s", Frase);
    
    int tam = strlen(Frase);

    while(i<tam){
        
        if(Frase[i] == letra){
            Frase[i] = letra2;
        }
        if(Frase[i] == letra3){
            Frase[i] = letra4;
        }
        i++;
    }
    
    printf("\n\nAprende a falar Cebolinha, na moral:\n");
    printf("%s", Frase);
    

    return 0;
}
