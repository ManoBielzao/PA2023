#include <stdio.h>

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


void MyPrint(ContaBancaria* conta);
