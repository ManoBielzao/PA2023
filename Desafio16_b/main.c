#include <stdio.h>
#include <stdlib.h>
typedef enum{
POUP,
CORR
}TipoConta;

typedef struct
{
    int numer;
    char nome[50];
    TipoConta tipo;
    float saldo;
}ContaBancaria;

typedef struct no
{
ContaBancaria conta; //a informação
struct no* proximo;  //ponteiro para o proximo da lista

}No;

typedef struct 
{
   No* primeiro;
   No* marcador;
   No* ultimo;
   int tamanho;
}Lista;

No* CriaNo(ContaBancaria ct)
{
   No* item = (No*) malloc(sizeof(No));
   item->conta = ct;
   item->proximo = NULL;
   return item; 
}

void AdicionaNoFimDaLista(Lista* ls, ContaBancaria ct) 
{
    No* novo_no = CriaNo(ct);
    if (ls->tamanho == 0)
    {
        ls->primeiro = novo_no;
   ls->ultimo = novo_no;
   ls->marcador = novo_no;
   ls->tamanho++;
    }
    else
    {
        ls->ultimo->proximo = novo_no;
        ls->ultimo = novo_no;
        ls->marcador = novo_no;
        ls->tamanho ++;
    }
   
}

void IniciaLista(Lista* ls)
{
    ls->primeiro = NULL;
    ls->marcador = NULL;
    ls->ultimo = NULL;
    ls->tamanho = 0;
}


void ImprimirConta(ContaBancaria c)
{
    printf("O titular da conta eh: %s\n ", c.nome);
    printf("E o saldo eh: %.2f\n ", c.saldo);
}

void ImprimirLista(Lista* ls)
{


    if (ls->tamanho != 0)
    {
        ls->marcador = ls->primeiro;
        

        while (ls->marcador != NULL)
        {
            ImprimirConta(ls->marcador->conta);
            ls->marcador = ls->marcador->proximo;
        
        }
        
    }
    else
    {
        printf("A lista esta vazia.\n");
    }
    
}

void RemoveNoINicioDaLista(Lista* ls)
{
    if (ls->tamanho != 0)
    {
        if (ls->tamanho == 1)
        {
            free(ls->primeiro);
            IniciaLista(ls);
        }
        else
        {
            ls->marcador = ls->primeiro;
            ls->primeiro = ls->marcador->proximo;
            free(ls->marcador);
         ls->tamanho--;
         }

       
    }
    
}

void RemoveElementoNaPosicao(Lista* ls, int posicao) {
    if (ls->tamanho == 0 || posicao < 0 || posicao >= ls->tamanho) {
        printf("Posicao invalida ou lista vazia.\n");
        return;
    }

    if (posicao == 0) {
        // Remover o primeiro elemento
        RemoveNoINicioDaLista(ls);
    } else {
        No* anterior = ls->primeiro;
        ls->marcador = anterior->proximo;
        int contador = 1;

        while (ls->marcador != NULL && contador < posicao) {
            anterior = ls->marcador;
            ls->marcador = ls->marcador->proximo;
            contador++;
        }

        if (ls->marcador != NULL) {
            anterior->proximo = ls->marcador->proximo;
            free(ls->marcador);
            ls->marcador = NULL;
            ls->tamanho--;
        }
    }
}


int main()
{
    int posicao;
ContaBancaria c1 = {100, "Anderson", CORR, 1.00};
ContaBancaria c2 = {200, "KPT", POUP, 10.00};
ContaBancaria c3 = {300, "DISGRAca", CORR, 102.00};
ContaBancaria c4 = {400, "FDP", POUP, -1.00};
Lista minhas_contas;


IniciaLista(&minhas_contas);

AdicionaNoFimDaLista(&minhas_contas, c1);

AdicionaNoFimDaLista(&minhas_contas, c2);

AdicionaNoFimDaLista(&minhas_contas, c3);
AdicionaNoFimDaLista(&minhas_contas, c4);

printf("Escolha uma posicao para remover da lista\n");
scanf("%d", &posicao);
RemoveElementoNaPosicao(&minhas_contas, posicao);
ImprimirLista(&minhas_contas);



/*ImprimirLista(&minhas_contas);

printf("\n ********** \n");
RemoveNoINicioDaLista(&minhas_contas);
ImprimirLista(&minhas_contas);

printf("\n ********** \n");
RemoveNoINicioDaLista(&minhas_contas);
ImprimirLista(&minhas_contas);

printf("\n ********** \n");
RemoveNoINicioDaLista(&minhas_contas);
ImprimirLista(&minhas_contas);

printf("\n ********** \n");
RemoveNoINicioDaLista(&minhas_contas);
ImprimirLista(&minhas_contas);*/
    return 0;
}