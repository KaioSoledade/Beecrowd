#include <stdio.h>

int main()
{
    int a , b, c, d, e, f, g, h;
    a = 0;
    b = 0;
    c = 0;
    d = 0; 
    e = 0;
    f =0;
    g =0;
    h =0;
    scanf("%d %d %d", &a, &b, &c);
    f=a;
    g=b;
    h=c;
    
    while(e == 0){
        if(a<b){
            d = a;
            a = b;
            b = d;
        }
        if(a<c){
            d = a;
            a = c;
            c = d;
        }
        if(b<c){
            d = b;
            b = c;
            c = d;
        }
        
        if(a>b && a>c && b>c){
            e = 1;
        }
    }
    printf("%d\n", c);
    printf("%d\n", b);
    printf("%d\n\n", a);
    printf("%d\n", f);
    printf("%d\n", g);
    printf("%d\n", h);

}
