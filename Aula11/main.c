#include<stdio.h>
#include<string.h>
#define MAX_LIST_PROD 10
#define SAIR 0
#define OK 1


typedef enum
{
    TV,
    SOM,
    CELULAR

}TipoDeProduto;


typedef struct
{
    char Nome[50];
    TipoDeProduto tipo;
    float preco;
}Produto;




int AddProduto(Produto prod, Produto* lista_p)

{

    static int quantidade = 0;



    lista_p[quantidade] = prod;



    quantidade++;

    return quantidade;

}



void ImprimirLista(int qnt, Produto* l_p)

{

    for (int i = 0; i < qnt; i++)

    {

        switch (l_p[i].tipo)

        {

        case TV:

            printf("O elemento numero %d", i);

            printf(" e um %s e custa R$%.2f\n",
            l_p[i].Nome,
            l_p[i].preco);

            break;

        case CELULAR:

            printf("O elemento numero %d", i);

            printf(" e um %s e custa R$%.2f\n",
            
            l_p[i].Nome,
            l_p[i].preco);

            break;

        case SOM:

            printf("O elemento numero %d", i);

            printf(" e um %s e custa R$%.2f\n",
          
            l_p[i].Nome,
            l_p[i].preco);

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
    fflush(stdin);


    if (produto_escolhido.tipo != -1)

    {
        printf("Digite o nome do Produto: \n");
        gets(produto_escolhido.Nome);


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

    Produto Lista_de_Produtos[MAX_LIST_PROD];

    Produto prod;



    do

    {

        estado = SolicitaDados(&prod);



        if (estado == OK)

        {

            qnt = AddProduto(prod,Lista_de_Produtos);

        }

    } while (qnt < MAX_LIST_PROD && estado == OK);

   

    ImprimirLista(qnt, Lista_de_Produtos);

}