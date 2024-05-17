#include <stdio.h>
#include <string.h>

typedef struct 
{
    int idade;
    char nome[50];

}Pessoa;


int main(int argc, char *argv[]){
    
    //char palavra[] = {'b', 'o', 'a',' ', 'n', 'o', 'i', 't', 'e', '\n'};
    char* outra_palavra = "turma de PA";
    
    char* copiadoutrapalavra = outra_palavra;
    
    //printf("Palavra: %s.\n", palavra);
    printf("Outra Palavra: %s.\n", outra_palavra);
    printf("Copia de Outra Palavra: %s.\n", copiadoutrapalavra);


    size_t tamanho = strlen(outra_palavra);
    float tam_float = (float)tamanho;

    printf("O tamanho de outra_palavra eh %f\n", tam_float);

    // outra_palavra[5] = '-';
    // outra_palavra[8] = '-';

    printf("Outra palavra: %s.\n", tam_float);

    char str[50];
    strcat(str, outra_palavra);
    strcat(str, "-");
    strcat(str, outra_palavra);

    printf("STR eh: %s.\n", str);


Pessoa aluno;
printf("Digite o nome do aluno: \n");
gets(aluno.nome);

if (strcmp(aluno.nome, "Paulo") == 0)
{
    printf("o nome eh Paulo");
}
else{
    printf("o nome nao eh Paulo");
}



    return 0;
}