#include <stdio.h>
#define SAIR 0
#define OK 1


typedef struct 
{
    int real;
    float ang;
}num_compl;

int SolicitaDados(num_compl* pd)
{
    num_compl num;
    

    printf("Digite a parte real do numero complexo desejado:\n");
    scanf("%d", &num.real);
    printf("Digite o angulo do numero complexo desejado:\n");
    scanf("%f", &num.ang);
}


int main(){





    return 0;
}
