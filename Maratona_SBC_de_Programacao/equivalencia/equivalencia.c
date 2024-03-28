#include <stdio.h>

int main()
{
    //CRIAR VARS LOCAIS ao CÓDIGO PRINCIPAL
    int a = 0, b = 0, m = 0;
    int resto1 = 0, resto2 = 0;


    //INICIALIZAR VARS
    scanf("%d %d %d", &a, &b, &m);

    //RECEBER DADOS
    resto1 = a % m;
    resto2 = b % m;

    if (resto1 == resto2) {
        printf("\n1 \n");
    }
    else {
        printf("0 \n");
    }

    return 0;

}//fimalgoritmos
