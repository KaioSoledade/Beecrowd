#include <stdio.h>

int main(){
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    int comp1 = (b > c) && (d > a) && ((c + d) > (a + b));
    int comp2 = c > 0 ;
    int comp3 = d > 0;
    int comp4 = a % 2;
    ;
        if (comp1 && comp2 && comp3 && (comp4 == 0))
    {
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }
    
}