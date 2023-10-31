#include <stdio.h>
#include <string.h>


int main()
{
    int x, y, idade, numero, tempo, n1, n2, n3, nC;
    char nome[100], estadoCivil[100], sexo[100];
    float h;

    y = 1;
    printf("(1) Conferencia de idade\n");
    printf("(2) Conferencia de par ou impar\n");
    printf("(3) Nome, Sexo, Estado Civil\n");
    printf("(4) Ordenador de numeros\n");
    printf("(5) Calculadora de IMC\n");




    scanf("%d", &x);

    switch(x){
        case 1:
            printf("Me informe sua idade:");
            scanf("%d", &idade);

            if(idade > 50){
                printf("Sua idade de %d eh MAIOR que 50\n", idade);
            }
            if(idade < 50){
                printf("Sua idade de %d eh MENOR que 50\n", idade);
            }
            if(idade = 50){
                printf("Sua idade de %d eh IGUAL a 50\n", idade);
            }
        break;

        case 2:
            printf("Me informe um numero:");
            scanf("%d", &numero);

            if (numero % 2 == 0){
                printf("Esse numero eh par\n");
            }
            if (numero % 2 == 1){
                printf("Esse numero eh impar\n");
            }
        break;

        case 3:


            printf("Me informe seu nome\n");
            scanf("%s", &nome);

            printf("Me informe seu Estado Civil\n 1. CASADO(A)\n 2. SOLTEIRO(A)\n");
            scanf("%s", &estadoCivil);

            printf("Me informe\n 1. Feminino(F)\n 2. Masculino(M)\n");
            scanf("%s", &sexo);


            if( strcmp(estadoCivil, "CASADA") == 0 && strcmp(sexo, "F") == 0){
                printf("Me infome o tempo em anos de sua união Sra %s:\n", nome);
                scanf("%d", &tempo);
            }

            printf("Obrigado Sr(a) %s por responder a pesquisa", nome);

        break;

        case 4:
            
                printf("Fale o numero 1:\n");
            scanf("%d", &n1); //1000

                printf("Fale o numero 2:\n");
            scanf("%d", &n2); //100

                printf("Fale o numero 3:\n");
            scanf("%d", &n3); //10


                if(n1 > n2){
                    nC = n2; // coringa = 100          n2 = 100     n1 = 1000     nC = 100
                    n2 = n1; // (n2)100 = (n1)1000     n2 = 1000    n1 = 1000     nC = 100
                    n1 = nC; // 10 = coringa           n2 = 1000    n1 = 100      nC = 100
                }
                if(n2 > n3){
                    nC = n3;
                    n3 = n2;
                    n2 = nC;
                }
                if(n1 > n3){
                    nC = n1;
                    n1 = n3;
                    n3 = nC;
                }
                if(n1 > n2){
                    nC = n2; // coringa = 100          n2 = 100     n1 = 1000     nC = 100
                    n2 = n1; // (n2)100 = (n1)1000     n2 = 1000    n1 = 1000     nC = 100
                    n1 = nC; // 10 = coringa           n2 = 1000    n1 = 100      nC = 100
                }
                if(n2 > n3){
                    nC = n3;
                    n3 = n2;
                    n2 = nC;
                }
                if(n1 > n3){
                    nC = n1;
                    n1 = n3;
                    n3 = nC;
                }
                if(n1 > n2){
                    nC = n2; // coringa = 100          n2 = 100     n1 = 1000     nC = 100
                    n2 = n1; // (n2)100 = (n1)1000     n2 = 1000    n1 = 1000     nC = 100
                    n1 = nC; // 10 = coringa           n2 = 1000    n1 = 100      nC = 100
                }
                if(n2 > n3){
                    nC = n3;
                    n3 = n2;
                    n2 = nC;
                }
                if(n1 > n3){
                    nC = n1;
                    n1 = n3;
                    n3 = nC;
                }

            printf("%d %d %d\n", n1, n2, n3);
        break;

        case 5:


            printf("Informe sua altura: ");
            scanf("%f", &h);

            printf("Informe seu sexo(F ou M): ");
            scanf(" %c", &sexo);

            if ( sexo == 'M')
            {
                printf("Seu peso ideal eh:%f", 72.7 * h - 58);
            }

            if (sexo == 'F')
            {
                printf("Seu peso ideal eh:%f", 62.1 * h - 44.7);
            }

            return 0;
        break;

        default:
        printf("Infome um valor valido");

    }

}