#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct {
    char nome[30];
    float salario;
    data nascimento;
}pessoa;

void entradaDados(pessoa *p){
    printf("\nDigite o nome:\n");
    scanf(" %[^\n]s", p->nome);
    printf("\nDigite o salario:\n");
    scanf("%.2f", &p->salario);
    printf("\nDigite o dia, mes e ano de nascimento:\n");
    scanf("%d", &p->nascimento.dia);
    scanf("%d", &p->nascimento.mes);
    scanf("%d", &p->nascimento.ano);
}


int main()
{
    pessoa p;
    entradaDados(&p);

    printf("\n\n--------------\n");
    printf("Nome: %s\n", p.nome);
    printf("Salario: %f\n", p.salario);
    printf("Data de Nascimento: %d/%d/%d\n", p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);

    return 0;
}