#include <stdio.h>
#include <stdlib.h>

int main () {

    int n, maior;
    scanf("%d", &n);

    int voto[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &voto[i]);
        if (i == 0)
            maior = voto[i];
        else if (voto[i] > maior)
            maior = voto[i];
    }

    if (maior == voto[0])
        printf("S\n");
    else
        printf("N\n");

    return 0;
}