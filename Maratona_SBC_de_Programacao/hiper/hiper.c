#include <stdio.h>

int main() {
    int n = 0;
    int cont = 0;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < n; i++) {
        cont = 0;
        for(int k = 2; k <= 10; k++) {
            if (vet[i] % k == 0 && k != vet[i]) {
                printf("0 \n");
                cont++;
                break;
            }
        }
        if(cont == 0) {
            printf("1 \n");
        }
    }

    return 0;
}