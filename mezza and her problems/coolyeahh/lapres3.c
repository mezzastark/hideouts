#include <stdio.h>

nomor1 ()
{
    float a,b,c ;
    printf("a="); scanf("%f", &a);
    printf("b="); scanf("%f", &b);
    c = a / b ;
    printf("luas= %f \n", c);
}

nomor2 ()
{
    float a,b,c,d;
    printf("a="); scanf("%f", &a);
    printf("b="); scanf("%f", &b);
    printf("c="); scanf("%f", &c);
    d = a * b * c;
    printf("luas= %f \n", d);
}

nomor3 ()
{
    float a,b,c,d,e;
    printf("a="); scanf("%f", &a);
    printf("b="); scanf("%f", &b);
    printf("c="); scanf("%f", &c);
    printf("d="); scanf("%f", &d);
    e = a / b * c * d;
    printf("luas= %f \n", e);
}

