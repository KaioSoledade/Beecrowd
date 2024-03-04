#include <stdio.h>


int main()
{
    int x, *px;
    int y, *py, *ppy;
   
    x = 10;
    px = &x;
    y = 20;
    py = &y;
   
    printf("valores de x e y : %d %d\n", x, y);
    printf("End. momeria de x e y : %x %x\n", &x, &y);
    printf("End. momeria de x e y : %x %x\n", px, py);
    printf("End. momeria de x e y : %x %x\n", &px, &py);
   
    *px = 15;
    // O endereço de "x" e "px" são os mesmo, então devidamente manipulado, altera o valor de "x" atraves de "px"
    // Agora a variavel "x" teve seu valor alterado de 10 para 15
    printf("End. momeria de x e y : %d %d\n", x, y);
    printf("End. momeria de x e y : %d %d\n", *px, *py);
   
    *px = *py;
    px = py;
    return 0;
}