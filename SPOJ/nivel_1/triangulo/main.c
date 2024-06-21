#include <stdio.h>
#include <stdlib.h>

int compara (const void *a, const void *b) {
    int v1 = *(int*)a;
    int v2 = *(int*)b;

    return v1 - v2;
}

int main () {

    int n[4];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &n[i]);
    }

    int cont = 0;

    qsort(n, 4, sizeof(int), compara);

    for (int i = 0; i < 4; i++) {
        cont = 0;
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                //printf("a:%d, b: %d, c: %d\n", n[i], n[j], n[k]);
                if (i != j && j != k && i != k) {
                    if ((n[i] + n[j]) > n[k] && (n[i] + n[k]) > n[j] && (n[j] + n[k]) > n[i]) {
                        cont++;
                    }
                }
                if (cont != 0) {
                    break;
                }
            }
            if (cont != 0) {
                break;
            }
        }
        if (cont != 0) {
           break;
        }
    }

    if (cont != 0) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}