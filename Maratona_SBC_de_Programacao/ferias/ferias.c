#include <stdio.h>

int main () {

    int n = 0, t = 0, i = 0, a = 0;
    int valor, cont;


    scanf("%d", &n);
    for (int k = 0; k < n; k++) {
        cont = 1;
        valor = 0;
        scanf("%d", &t);
        scanf("%d", &i);
        scanf("%d", &a);
        valor = i;
        while (i < t) {
            valor = valor + a;
            i = i + valor;
            cont++;
        }

        printf("%d \n", cont);
    }

    return 0;
}

