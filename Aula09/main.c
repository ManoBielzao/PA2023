#include <stdio.h>

struct tEstudante
{
    int idade;
    int matricula;
    float coeficiente;
    int periodo;
};

//Pode usar typedef pra renomear como no exemplo abaixo de Professor
typedef struct 
{
    int idade;
    int matricula;

}Professor;

Professor SolicitaDadosProfessor()
{
    Professor prof;

    printf("Digite a idade e matricula do Professor\n ");
    printf("Separados por '-': ");
    scanf("%d-%d", &prof.idade, &prof.matricula);


    return prof;
}
 

int main ()
{

struct tEstudante aluno;
Professor professor;

aluno.idade = 18;
aluno.matricula = 201801;
aluno.periodo = 5;
aluno.coeficiente = 8.8;

professor = SolicitaDadosProfessor();

printf("idade: %d \n Matricula: %d \n", professor.idade, professor.matricula);


struct tEstudante *melhor_aluno;

melhor_aluno = &aluno;

printf("Matricula: %d", melhor_aluno->matricula);

//printf("Matricula: %d\n", (*))





return 0;
}