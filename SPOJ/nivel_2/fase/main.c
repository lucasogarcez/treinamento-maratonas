#include <stdio.h>
#include <stdlib.h>

int compara_crescente (const void *a, const void *b){
    int v1 = *(int*) a;
    int v2 = *(int*) b;

    return v1 - v2;
}

int main(){
    int n=0; 
    scanf("%d", &n);

    int m; 
    scanf("%d", &m);
    
    int vet[1010];


    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    qsort(vet, n, sizeof(int), compara_crescente);
    int cont = 0;
    int maior = vet[n-1];
    int prox_maior = vet[0];


    for (int i = 0; i < n; i++) {
        if (maior == vet[i]) {
            cont++;
            vet[i] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (vet[i] > prox_maior)
            prox_maior = vet[i];
    }

    for (int i = 0; i < n; i++) {
        if (prox_maior == vet[i]) {
            cont++;
        }
    }

    printf("%d\n", cont);

}