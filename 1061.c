#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int b, c, d, f, g, h, i, j, k, num1, num2, com1, com2, cal1, cal2, horas, min, seg;
    char a[10], e[10];
    b = 0;
    c = 0;
    d = 0;
    f = 0;
    g = 0;
    h = 0;
    i = 0;
    com1 = 0;
    com2 = 0;
    cal1 = 0;
    cal2 = 0;
    horas = 0;
    min = 0;
    seg = 0;

    fgets(a, sizeof(a), stdin);
    if (strncmp(a, "dia", 3) == 0)
    {
        sscanf(a + 3, "%d", &num1);
    }
    scanf("%d %d %d", &b, &c, &d);
    while (getchar() != '\n')
        ;
    // serve para limpar o cache pelo que eu entendi

    fgets(e, sizeof(e), stdin);
    if (strncmp(e, "dia", 3) == 0)
    {
        sscanf(e + 3, "%d", &num2);
    }
    scanf("%d %d %d", &f, &g, &h);
    while (getchar() != '\n')
        ;
    // serve para limpar o cache pelo que eu entendi
    if (d > h)
    {
        seg = h - d;
    }
    if (d < h)
    {
        cal1 = min + 1;
        seg = h - d;
    }

    if (c > g)
    {
        min = g - c;
        min = min + cal1;
        if (b == f)
        {
            cal1 = 1;
        }
    }
    if (c < g)
    {
        min = g - c;
    }

    if (b > f)
    {
        horas = ((24 - b) + f);
        horas = horas + cal1;
    }
    if (b < f)
    {
        horas = ((24 - b) + f);
        horas = horas + cal1;
        
        if (num1 != num2)
        {
            cal1 = 1;
        }
        if (num1 == num2)
        {
            cal1 = 0;
        }
    }

    printf("%d dia(s)\n", (num2 - num1) - cal1);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);
}