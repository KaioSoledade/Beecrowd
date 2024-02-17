
#include <stdio.h>

int main()
{
    int a, b, c;
    a= 0;
    b= 1;
    c= 0;
    scanf("%d", &a);
    
    while(c == 0){
        printf("%d\n", b);
        b++;
        b++;
        if(b == a){
            printf("%d\n", b);
            c = 1;
        }
        if(b > a){
            c = 1;
        }
    }
    return 0;
}
