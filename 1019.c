#include <stdio.h>

int main(){
    int a, b, c, d;
    b = 0;
    c = 0;
    d = 0;
    scanf("%d", &a);

    while( a >= 3600){
        a = a - 3600;
        b++;
    }
    while( a >= 60){
        a = a - 60;
        c++;
    }
    d = a;

    printf("%d:%d:%d\n", b, c, d);
}