#include <stdio.h>
#include <stdlib.h>

int main () {

    int n[3], total = 0, menor = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j && i == 1) //meio
                total += n[j] * 2;
            if (i == 0 && j == 1) //inicio e meio
                total += n[j] * 2;
            if (i == 0 && j == 2) //inicio e fim
                total += n[j] * 4;
            if (i == 2 && j == 0) //fim e inicio
                total += n[j] * 4;
            if (i == 2 && j == 1) //fim e meio
                total += n[j] * 2;
        }
        if (i == 0)
            menor = total;
        if (menor > total)
            menor = total;
        //printf("CASO: %d\n", menor);
        total = 0;
    }

    printf("%d\n", menor);

    return 0;
}