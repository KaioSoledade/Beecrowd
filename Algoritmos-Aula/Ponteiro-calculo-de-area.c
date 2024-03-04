#include <stdio.h>

void calculoArea(float b, float a, float *parea);
int main()
{
    float base, altura, area;
    printf("Digite a Base e a Altura:\n");
    scanf("%f %f", &base, &altura);
    calculoArea(base, altura, &area);
    printf("A area eh: %.2f\n", area);
   

    return 0;
}

void calculoArea(float b, float a, float *parea){
    *parea = b * a;
   
}
