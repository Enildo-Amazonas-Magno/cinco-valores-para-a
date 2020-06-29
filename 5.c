#include <stdio.h>
int main()
{
    int i;
    i=0;
    double a, b, c, d, e;
    printf("Digite um valor:\n");
    scanf("%lf", &a);
    printf("Digite um valor:\n");
    scanf("%lf", &b);
    printf("Digite um valor:\n");
    scanf("%lf", &c);
    printf("Digite um valor:\n");
    scanf("%lf", &d);
    printf("Digite um valor:\n");
    scanf("%lf", &e);
    if(a < 0)
        i=i+1;
    if(b < 0)
        i=i+1;
    if(c < 0)
         i=i+1;
    if(d < 0)
        i=i+1;
    if(e < 0)
        i=i+1;
    printf("Foram digitados %d numeros negativos\n", i);
    return 0;
}