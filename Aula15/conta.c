#include "conta.h"

void MyPrint(ContaBancaria* conta)
{
printf("Conta de numero %i.\n", conta->numer);
printf("Do usuario %s.\n", conta->nome);

switch (conta->tipo)
{
case POUP:
    printf("Do tipo poupanca.\n");
    break;
case CORR:
    printf("Do tipo corrente.\n");
    break;
default:
printf("Tipo de conta invalido.\n");
    break;
}
printf("Tem um saldo de %.2f.\n", conta->saldo);





}