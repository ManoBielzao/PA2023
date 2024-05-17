#include <stdio.h>
#include <string.h>

#define PESTANA 10
#define FIM 10

/*Primeira forma de definir uma estrutura*/
struct Nota
{
  int corda;
  int casa;   
};


/*Segunda forma de definir uma estrutura*/
typedef struct 
{
  char letra;
  char  nome[20];  
  struct Nota nota[4];
  

}Acorde;
typedef struct 
{
    char nome[60];
    char arranjo[50];
    int tempo;//em segundos
}Musica;


/*Acorde vetorAcordes[4] = {'C', "Do maior", {{2, 1}, {4, 2}, {5, 3}, {0, 0}};
{'F', "Fa maior", {{PESTANA, 1}, {1, 2}, {5, 3}, {4, 3}}};
{'G', "Sol maior", {{5, 2}, {6, 3}, {1, 3}, {0, 0}}};
{'D', "Re maior", {{3, 2}, {1, 2}, {2, 3}, {0, 0}}};};*/


Musica m1 = {"Autas Ideas com u", {'F', 'G', 'C','D', FIM}, 4};

void ImprimeCifra(Musica musica)
{
    printf("Nome da musica: %s", musica.nome);

    for (int i = 0; musica.arranjo[i] != FIM, i < 50; i++)
    {
        /* code */
    }
    
}

 int main(){
    /*Exemplos: */

    /*Como usaria a primeira definição*/
    struct Nota lah;
    /*Como usaria a segunda definição*/
    Acorde domaior;

    printf("%s");

    return 0;
 }