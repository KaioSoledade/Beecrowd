#include <stdio.h>

int main(){
    int a, b, c, d, e, f, g, h, i;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    g = 0;
    h = 0;
    scanf("%d", &a);
    i = a;
    
    while( a >= 100){
        a = a - 100;
        b++;
    }
    while( a >= 50){
        a = a - 50;
        c++;
    }
    while( a >= 20){
        a = a - 20;
        d++;
    }
    while( a >= 10){
        a = a - 10;
        e++;
    }
    while( a >= 5){
        a = a - 5;
        f++;
    }
    while( a >= 2){
        a = a - 2;
        g++;
    }
    while( a >= 1){
        a = a - 1;
        h++;
    }


    printf("%d\n", i);
    printf("%d nota(s) de R$ 100,00\n", b);
    printf("%d nota(s) de R$ 50,00\n", c);
    printf("%d nota(s) de R$ 20,00\n", d);
    printf("%d nota(s) de R$ 10,00\n", e);
    printf("%d nota(s) de R$ 5,00\n", f);
    printf("%d nota(s) de R$ 2,00\n", g);
    printf("%d nota(s) de R$ 1,00\n", h);
}