#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    g = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == c && b == d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        g = 1;
    }
    if (a == c && g == 0 && b > d)
    {
        g = b - d;
        if (g < 0)
        {
            g = g * (-1);
        }
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", 60 - (g));
    }
    if (a == c && b < d)
    {
        g = d - b;
        if (g < 0)
        {
            g = g * (-1);
        }
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", g);
    }

    if (a > c)
    {
        a = (a * 60) + b;
        a = 720 - a;
        c = (c * 60) + d;
        e = a + c;

        while (e >= 60)
        {
            e = e - 60;
            f++;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f + 12, e);
        a = 2;
        c = 1;
    }
    if (a < c)
    {
        a = (a * 60) + b;
        c = (c * 60) + d;
        e = c - a;

        while (e >= 60)
        {
            e = e - 60;
            f++;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", f, e);
    }
}