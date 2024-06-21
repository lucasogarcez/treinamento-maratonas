#include <stdio.h>
#include <stdlib.h>

int main () {

    int n;
    scanf("%d", &n);
    int porta = 1;
    int cont = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &porta);
        if (porta != 1) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}