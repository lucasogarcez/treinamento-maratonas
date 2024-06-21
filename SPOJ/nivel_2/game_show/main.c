#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int vet[110];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    int maior = 100;
    int total = 100;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            total += vet[j];
        }
        if (total > maior)
            maior = total;
        total = 100;
    }

    printf("%d\n", maior);
    

    return 0;
}