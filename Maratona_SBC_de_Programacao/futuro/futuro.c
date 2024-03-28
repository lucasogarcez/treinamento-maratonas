#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main()
{
    //CRIAR VARS LOCAIS ao CÓDIGO PRINCIPAL
    int aux = 0, num = 0, vezes = 0;


    //INICIALIZAR VARS
    char input[1000];
    int n[MAX];
    int count = 0;

    for (int i = 0; i < MAX; i++) {
        n[i] = -1;
    }

    fgets(input, sizeof(input), stdin);

    // Separando os números
    char *token = strtok(input, " ");
    while (token != NULL && count < MAX) {
        n[count++] = atoi(token);
        token = strtok(NULL, " ");
    }

    //ORDENAÇÃO CRESCENTE
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-1; j++)
        {
            if (n[j] > n[j+1])
            {
                aux = n[j];
                n[j] = n[j+1];
                n[j+1] = aux;
            }
        }
    }

    //REPETIÇÃO
    int j = 0;
    for (int i = 0; i < count; i++)
    {
        j = 0; //VOLTAR A POSIÇÃO INICIAL PARA REINICIAR A VERIFICAÇÃO E VER SE JÁ FOI PASSADO ANTES
        while (j < i && n[i] != n[j]) //NAO DEIXAR REPETIR NUMERO ANTERIORMENTE PASSADO
            j++;
        if (i == j) //POSIÇÃO IGUAL
        {
            for (j = i + 1; j < count; j++) //VARREDURA NO VETOR
            {
                if (n[i] == n[j]) {
                    vezes++;
                    if (j == 1) {
                        vezes++;
                    }
                }
            }
            printf ("%d %d\n", n[i], vezes);
            vezes = 1;
        }
    }


    return 0;

}//fimalgoritmos
