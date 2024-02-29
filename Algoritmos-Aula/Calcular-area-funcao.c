
#include <stdio.h>
float calculadoraArea(float base, float altura){
    float area = base * altura;
    return area;
}

int main()
{
    float base, altura, area;
    printf("Digite a base e  a altura:\n");
    scanf("%f %f", &base, &altura);
   
    area = calculadoraArea(base,altura);
   
    printf("A area eh %.2f", area);

    return 0;
}