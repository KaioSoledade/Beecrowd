#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, e;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    
    if ( a >= b+c || b >= c+a || c >= a+b){
        // Trapezio
        d = ((a+b)*c)/2.0;
        printf("Area = %.1lf\n", d);

    } else{
        //Triangulo
        d = a + b + c;
        printf("Perimetro = %.1lf\n", d);
        
        
    }
    

    
}
