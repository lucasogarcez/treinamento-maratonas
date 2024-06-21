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

    for (int i = 0; i < n; i++) {
        printf("vet[%d]: %d\n", i, vet[i]);
    }
    
    int cont=0;
    for(int i=m; i>=0; i--){
        if(vet[m-1]==vet[i]) {
            cont++;
        }
    }

    if ((cont+m) == n) {
        printf("%d\n", n);
    } else {
        printf("%d\n", (cont-1)+m);
    }


}