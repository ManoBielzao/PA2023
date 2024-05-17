#include <stdio.h>
#include "conta.h"

int main()
{
ContaBancaria conta = {01, "Juninho", CORR, 10.00}; 
MyPrint(&conta);

return 0;
}