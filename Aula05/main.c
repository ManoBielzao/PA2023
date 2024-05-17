#include <stdio.h>
#include <stdlib.h>

#define max_prod 10

typedef enum{
TV,
SOM,
CELULAR
}produto;

produto lista_prod[max_prod];
float lista_precos[max_prod];

int addprod(produto prod, float preco)
{
    static int quant = 0;

    lista_prod[quant] = prod;
    lista_precos[quant] = preco;

    quant++;
    return quant;
}
void imprim_lista(int qnt){
    for (int i = 0; i < qnt; i++)
    {
        switch (lista_prod[i])
        {
        case TV:
        printf("O fudendo numero %d", i);
        printf(" e um(a) TV e custa R$%.2f\n", lista_precos[i]);
        break;
        case CELULAR:
        printf("O fudendo numero %d", i);
        printf(" e um(a) Celular e custa R$%.2f\n", lista_precos[i]);
        break;
        case SOM:
        printf("O fudendo numero %d", i);
        printf(" e um(a) Som e custa R$%.2f\n", lista_precos[i]);
        break;
        default:
        printf("Oh meu nobre, esse numero nao existe");
            break;
        }
    }  
}

int SolicitaDados(){
        produto prod_escol;
        float preco;
        int qnt;

      printf("Digite o produto desejado:\n");
      printf("Digite 0 para TV\n");
      printf("Digite 1 ppara Som\n");
      printf("Digite 2 para Celular\n");
      scanf("%d", &prod_escol);
      
if (prod_escol != -1){

    printf("Digite o preco do produto: ");

      scanf("%f", &preco);
      qnt = addprod(prod_escol, preco);
      return qnt;
}

      return prod_escol;
    }
int main()
{
    int qnt = 0;
    int cont = 0;
    // exemplo operador ternario
    // 4 > 3       ? printf("ok\n\n\n")      :   printf("erro\n\n\n");
    // condição   ? valor se verdadeiro>     :   <valor se falso>

    while (qnt >= 0 && qnt < max_prod)
    {
        (SolicitaDados()!=-1) ? (cont++) :(qnt = -1);
    }
    
    imprim_lista(cont);

}