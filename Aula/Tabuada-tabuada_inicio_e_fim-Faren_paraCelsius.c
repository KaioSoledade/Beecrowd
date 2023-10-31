
#include <stdio.h>

int main()
{
    int x, z, y, w;
    float f;
    printf("(1)--Tabuada de 1 a 10\n");
    printf("(2)--Tabuada, escolha o comeco e o fim dele\n");
    printf("(3)--Fahrenheit para Centigrados\n");
    scanf("%d", &z);
    switch(z){
        case 1:
        scanf("%d", &x);

        for(y = 1; y <= 10; y++){
        printf("%d X %d = %d\n", x, y, x*y);
        }
        break;

        case 2:
        printf("Me infome o numero que deve ser multiplicado\n");
        scanf("%d", &x);
        printf("Me infome o inicio da tabuada\n");
        scanf("%d", &y);
        printf("Me infome o fim da tabuada\n");
        scanf("%d", &w);
        for(y; y <= w ; y++){
            printf("%d X %d = %d\n", x, y, x*y);
        }
        break;

        case 3:
        printf("Fahrenheit(F)    Centigrados(C)\n");
        for(f = 50; f <= 70; f++){
            printf("F = %.0f , C = %f\n", f ,(0.555555* (f - 32)) );
        }

        break;

        default:
        printf("Infome um valor valido\n");
    }

}
