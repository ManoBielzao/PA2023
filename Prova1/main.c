#include <stdio.h>
#include <stdlib.h>

#define intensidade 255
#define num_comps 3

typedef enum{

VERM,
VERD,
AZUL,

}Cores;


float ComporCor(int* cor, int x, Cores component){

static Cores ultima_cor;
ultima_cor = component;
float soma = 0.0f;

switch (component)
{
case VERM:
    cor[0] = x;
    break;
case VERD:
    cor[1] = x;
    break;
case AZUL:
    cor[2] = x;
    break;

default:
    break;
}
     
for (int i = 0; i < num_comps; i++)
{
   soma += cor[i];
}

return soma/num_comps;

}

int main(int argc, char *argv[]){
    
    int cor_1[3] = {0, 0, 0};
    int cor_2[3] = {0, 0, 0};
    float media_cor_1 = 0.0f;
    float media_cor_2 = 0.0f;

media_cor_1 = ComporCor(cor_1, intensidade, AZUL);
media_cor_1 = ComporCor(cor_1, intensidade, VERD);


media_cor_2 = ComporCor(cor_2, intensidade, VERM);
media_cor_2 = ComporCor(cor_2, intensidade, AZUL);
media_cor_2 = ComporCor(cor_2, intensidade, VERD);

printf("A cor 1 eh formada por:\n");
printf("Vermeio: %d\n", cor_1[VERM]);
printf("Verde: %d\n", cor_1[VERD]);
printf("Azul: %d\n", cor_1[AZUL]);
printf("A media das componentes eh: %.2f\n\n", media_cor_1);

printf("A cor 2 eh formada por:\n");
printf("Vermeio: %d\n", cor_2[VERM]);
printf("Verde: %d\n", cor_2[VERD]);
printf("Azul: %d\n", cor_2[AZUL]);
printf("A media das componentes eh: %.2f\n\n", media_cor_2);


return 0;
}