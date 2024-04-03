#include <stdio.h>
#include <stdlib.h>

// exemplo 1 de struct aninhada

/*
struct departamento
{
    int cod;
    char descricao[30];
};

struct cargo
{
    int cod;
    char descricao[30];
};

struct funcionario
{
    int cod;
    char nome[30];
    float salario;
    struct departamento depto;
    struct cargo cargo;
};

struct funcionario Funcionario;
*/

// exemplo 2 de struct aninhada
struct cargo
{
    int cod;
    char descricao[30];
};

struct funcionario
{
    int cod;
    char nome[30];
    float salario;
    struct departamento
    {
        int cod;
        char descricao[30];
    };

    struct cargo cargo;
};

struct funcionario Funcionario;

int main(void)
{
}