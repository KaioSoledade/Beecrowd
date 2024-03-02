#include <stdio.h>

int main()
{
    int a, b, c;
    a = 0;
    b = 0;
    c = 0;
    
    scanf("%d %d", &a, &b);
    if( a > b){
        c = 3;
    }
    if( b > a){
        c = 2;
    }
    
    
    while(c == 2){
        
        b = b - a;
        
        
        if(b == 0){
            c = 1;
            printf("Sao Multiplos\n");
        }
        if(b < 0){
            c = 1;
            printf("Nao sao Multiplos\n");
        }
    }
    
        while(c == 3){
        
        a = a - b;
        
        
        if(a == 0){
            c = 1;
            printf("Sao Multiplos\n");
        }
        if(a < 0){
            c = 1;
            printf("Nao sao Multiplos\n");
        }
    }
    
    
}
