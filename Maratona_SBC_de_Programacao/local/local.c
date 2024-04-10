#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    char vet[19];
    scanf("%s", vet);
    int i, aux, fim, tam = strlen(vet);
    
    fim = tam - 1; // índice do último caracter
    for(i = 0; i < tam/2; i++){
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
    
    printf("%s\n", vet);
}