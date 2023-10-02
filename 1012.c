int main(){
    double arm1, arm2, arm3;
    double pi = 3.14159;

    scanf("%lf\n", &arm1);
    scanf("%lf\n", &arm2);
    scanf("%lf\n", &arm3);

    printf("TRIANGULO: %.3lf\n", (arm1*arm3)/2 );
    printf("CIRCULO: %.3lf\n", (arm3*arm3)*pi );
    printf("TRAPEZIO: %.3lf\n", ((arm1+arm2)*arm3/2));
    printf("QUADRADO: %.3lf\n", (arm2*arm2));
    printf("RETANGULO: %.3lf\n", (arm1*arm2));

    return 0;
}