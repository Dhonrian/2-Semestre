#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, min, max, nota, aluno;
    aluno = 1;
    max = 0;
    min = 10;
    printf("Insira o numero de alunos: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Insira a nota do %do aluno: ", aluno);
        scanf("%d", &nota);
        if(nota > 0 && nota < 10)
        {
            if(nota > max)
                max = nota;
            if(nota < min)
                min = nota;
        }
        else
        {
            printf("Insira uma nota valida: ");
            scanf("%d", &nota);

        }
        aluno++;


    }

    printf("Maior nota: %d \t Menor nota: %d", max, min);
    return 0;
}

