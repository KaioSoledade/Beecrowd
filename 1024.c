
#include <stdio.h>
#include <string.h>

int codificador(char frase[]) {
  int tam,i=0, tam2, i2;
  tam=0;

  char frase2[1000];

  tam = tam2 = strlen(frase);
  
  //Codificar Letras
  while(tam>=i){
      if ((frase[i] > 64 && frase[i] < 91) || (frase[i] > 96 && frase[i] < 123)){
        frase[i] = frase[i] + 3;
      }
      i++;
  }


  //Inverter
  for (i2 = tam - 1, i = 0; i2 >= 0; i2--, i++) {
    frase2[i] = frase[i2];
  }
  frase2[tam] = '\0';

  //Codificar Metade
  for(int e = tam/2; e<tam; e++){
      
      frase2[e] = frase2[e] - 1;
      
      // printf("%c", frase2[e]);
      
  }
  printf("%s", frase2);
  printf("\n");
  return 0;
}


int main(){
  
  int linha, e;
  e=0;
  char text[1000];

  scanf("%d", &linha);

  while(e < linha){
    scanf(" %[^\n]s", text);
    printf("\n\n\n");
    codificador(text);
    e++;
  }
  return 0;
}
