#include <stdio.h>
#include <conio.h>

int main(void){

    struct ficha_aluno
    {
        int matricula;
        char nome[50];
        char disciplina[30];
        float nota;
    };
    
    struct ficha_aluno aluno;

    printf("\n FICHA DO ALUNO \n");

    printf("Matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Nome do aluno: ");
    scanf("%s", &aluno.nome);

    printf("Disciplina do aluno: ");
    scanf("%s", &aluno.disciplina);

    printf("Informe a nota do aluno: ");
    scanf("%f" , &aluno.nota);

    printf("\n FICHA DO ALUNO \n");

    printf("Matricula: %d\n" , aluno.matricula);
    printf("Nome: %s\n" , aluno.nome);
    printf("Disciplina: %s\n" , aluno.disciplina);
    printf("Nota: %.2f\n" , aluno.nota);

    system("pause");
    return(0);
}