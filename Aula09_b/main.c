#include<stdio.h>

#define MAX_LIST_PROD 10
#define SAIR 0
#define OK 1

typedef enum{
    TV,
    SOM,
    CELULAR
}Tipodeproduto;

typedef struct 
{
    Tipodeproduto tipo;
    float preco;
}Produto;


Produto Lista_de_Produtos[MAX_LIST_PROD];


int AddProduto(Produto prod)
{
    static int quantidade = 0;

    Lista_de_Produtos[quantidade] = prod;
    

    quantidade++;
    return quantidade;
}

void ImprimirLista(int qnt)
{
    for (int i = 0; i < qnt; i++)
    {
        switch (Lista_de_Produtos[i].tipo)
        {
        case TV:
            printf("O elemento numero %d", i);
            printf(" e um televisor e custa R$%.2f\n",
            Lista_de_Produtos[i].preco);
            break;
        case CELULAR:
            printf("O elemento numero %d", i);
            printf(" e um celular e custa R$%.2f\n",
            Lista_de_Produtos[i].preco);
            break;
        case SOM:
            printf("O elemento numero %d", i);
            printf(" e um som e custa R$%.2f\n",
            Lista_de_Produtos[i].preco);
            break;
        
        default:
            printf("Produto nao cadastrado.\n");
            break;
        }
    }   
}


int SolicitaDados(Produto* pd)
{
    Produto produto_escolhido;
    

    printf("Digite o produto desejado:\n");
    printf("Digite 0 para TV\n");
    printf("Digite 1 para SOM\n");
    printf("Digite 2 para CELULAR\n");
    printf("Digite -1 para sair\n");
    scanf("%d", &produto_escolhido.tipo);

    if (produto_escolhido.tipo != -1)
    {
        printf("Digite o preco do produto: ");
        scanf("%f", &produto_escolhido.preco);

        
        *pd = produto_escolhido;
        
        
        return OK;
    }
    return SAIR;
}

int main()
{
    int qnt = 0;
    int estado = OK;

    
    Produto prod;
    

    do
    {
        
        estado = SolicitaDados(&prod);

        
        if (estado == OK)
        {
            
            qnt = AddProduto(prod);
        }
    } while (qnt < MAX_LIST_PROD && estado == OK);
    
    ImprimirLista(qnt);
}