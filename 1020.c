#include <stdio.h>

int main(){
    int a, b, c, d;
    b = 0;
    c = 0;
    d = 0;
    scanf("%d", &a);

    while( a >= 365){
        a = a - 365;
        b++;
    }
    while( a >= 30){
        a = a - 30;
        c++;
    }
    d = a;

    printf("%d ano(s)\n", b);
    printf("%d mes(es)\n", c);
    printf("%d dia(s)\n", d);
}