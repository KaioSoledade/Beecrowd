
#include <stdio.h>

int main()
{
    int x, y, z;
    y = 1;
    printf("(1) Contagem de 1 a 50\n");
    printf("(2) Contagem de 50 a 1\n");
    printf("(3) Numeros pares de 1 a 100\n");
    printf("(4) Tabuada escolhida por voce\n");
    printf("(5) Media das idades\n");




    scanf("%d", &x);

    switch(x){
        case 1:
        while(y != 51){
            printf("%d\n", y);
            y++;
        }
        break;

        case 2:

        y = 50;
        do{
            printf("%d\n", y);
            y--;
        } while( y > 0);
        break;

        case 3:
        y = 0;

        while(y != 100){

            printf("%d\n", y);
            y = y + 2;
        }
        break;

        case 4:
        printf("Escolha um numero e eu falarei a tabuada de 1 a 10:\n");
        scanf("%d", &y);
        z = 1;

        while(z < 11){
            printf("%d x %d = %d\n", y, z, y*z);
            z++;
        }
        break;

        case 5:
        int va1, va2, i, media;
        i = 1;
        printf("Caso queira para, digite 0.\n");
        printf("Digite as idades para eu te fornecer a media\n");
        while(i != 0){
            printf("(%d):", i);
            scanf("%d", &va1);
            if(va1 == 0){
                break;
            }
            i++;
            va2 = va1 + va2;
        }

        media = (va2)/i;
        printf("A media das idades eh %d", media);

        break;

        default:
        printf("Esse valor nao eh valido\n");
        }

    }


