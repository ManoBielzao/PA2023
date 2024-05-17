#include <stdio.h>
#include <string.h>

#define Max_List_Prod 10
#define Sair 0
#define Ok 1

typedef enum{
    TV,
    Som,
    Celular
}TipoDeProduto;

typedef struct
{
    char Nome[50];
    TipoDeProduto tipo;
    float preco;
}Produto;

int AddProduto(Produto prod, Produto* lista_p){
static int quantidade = 0;
lista_p[quantidade] = prod;
quantidade++;
return quantidade;
}

void ImprimirLista(int qnt, Produto* l_p){
for (int i = 0; i < qnt; i++)
{
    switch (l_p[i].tipo)
    {
    case TV:
    printf("O elemento numero %d", i);
    printf("eh um %s e custa R$%.2f\n",
    l_p[i].Nome, l_p[i].preco);
    break;
    
    case Celular:
    printf("O elemento numero %d", i);
    printf("eh um %s e custa R$%.2f\n",
    l_p[i].Nome, l_p[i].preco);
    break;

    case Som:
    printf("O elemento numero %d", i);
    printf("eh um %s e custa R$%.2f\n",
    l_p[i].Nome, l_p[i].preco);
    break;
    
    default:
    printf("Produto não cadastrado.\n");
    break;
    }
  }
}
int SolicitaDados(Produto* pd){

Produto produto_escolhido;
printf("Digite o produto desejado:\n");
printf("Digite 0 para TV\n");
printf("Digite 1 para SOM\n");
printf("Digite 2 para CELULAR\n");
printf("Digite -1 para SAIR\n");
scanf("%d", &produto_escolhido.tipo);
fflush(stdin);

if (produto_escolhido.tipo != -1)
{
    printf("Digite o nome do produto: ");
    gets(produto_escolhido.Nome);
    printf("Digite o preco do produto: ");
    scanf("%f", &produto_escolhido.preco);

    *pd = produto_escolhido;
    return Ok;
}
return Sair;

}

int main(){

    int qnt = 0;
    int estado = Ok;

    Produto prod;
    Produto Lista_de_Produtos[Max_List_Prod];

    do
    {
        estado = SolicitaDados(&prod);
if (estado == Ok){
qnt = AddProduto(prod, Lista_de_Produtos);

}

    } while (qnt < Max_List_Prod && estado == Ok);
    ImprimirLista(qnt, Lista_de_Produtos);

    return 0;
}