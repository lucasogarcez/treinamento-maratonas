#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int matriz[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int somaD1;
    int somaD2;
    int somaT;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                somaD1 += matriz[i][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j + 1) == n) {
                somaD2 += matriz[i][j];
            }
        }
    }
    
    somaT = somaD2 - somaD1;
    if(somaT < 0) {
        somaT *= -1;
    }
    
    printf("%d\n", somaT);

    return 0;
}
