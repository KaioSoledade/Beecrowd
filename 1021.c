#include <stdio.h>

int main(){
    int b, c, d, e, f, g, h, i, j, k, l, m;
    float a;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    g = 0;
    h = 0;
    i = 0;
    j = 0;
    k = 0;
    l = 0;
    m = 0;
    scanf("%f", &a);
    
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
    while( a >= 0.50){
        a = a - 0.50;
        i++;
    }
    while( a >= 0.25){
        a = a - 0.25;
        j++;
    }
    while( a >= 0.10){
        a = a - 0.10;
        k++;
    }
    while( a >= 0.05){
        a = a - 0.05;
        l++;
    }
    while( 0.009 <= a){
        a = a - 0.01;
        m++;
    }


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", b);
    printf("%d nota(s) de R$ 50.00\n", c);
    printf("%d nota(s) de R$ 20.00\n", d);
    printf("%d nota(s) de R$ 10.00\n", e);
    printf("%d nota(s) de R$ 5.00\n", f);
    printf("%d nota(s) de R$ 2.00\n", g);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", h);
    printf("%d moeda(s) de R$ 0.50\n", i);
    printf("%d moeda(s) de R$ 0.25\n", j);
    printf("%d moeda(s) de R$ 0.10\n", k);
    printf("%d moeda(s) de R$ 0.05\n", l);
    printf("%d moeda(s) de R$ 0.01\n", m);
}