#include <stdio.h>

int Adiciona1(int x, int y);
int Adiciona2(int x, int*y);
void Adiciona3(int x, int *y);

int main (int argc, char *argv[])
{
    int a = 2;
    int b = 2;

    int c = Adiciona1(a, b);

    printf("Adiciona 1");
    printf("O valor de a %d\n", a);
    printf("O valor de b %d\n", b);
    printf("O valor de c %d\n", c);


int d = Adiciona2(a, &b);
printf("Adiciona 2");
printf("O valor de a %d\n", a);
printf("O valor de b %d\n", b);
printf("O valor de d %d\n", d);
// double c = 15;
//double *p;

// p = &c;
// printf("%p\n%p\n", &d, p);
// printf("%f\n%f\n%f\n", c, *p, d);

return 0;
}
int Adiciona1(int x, int y)
{
    int c = x + y;
    y = 2000;
    return c;
}
int Adiciona2(int x, int *y)
{
    int c = x + *y;
    return c;
}
void Adiciona3(int x, int *y)
{
   *y = x + *y;
}