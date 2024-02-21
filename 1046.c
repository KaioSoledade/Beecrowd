#include <stdio.h>

int main()
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    
    scanf("%d %d", &a, &b);
    
    if(a>b){
        c = 24 - a;
        c = c + b;
    }
    if(b>a){
        c = b - a;
    }
    if(b==a){
        c = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", c);
}
