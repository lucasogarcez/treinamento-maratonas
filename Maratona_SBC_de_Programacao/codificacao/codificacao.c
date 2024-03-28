#include <stdio.h>
#include <assert.h>

int mdc(int num1, int num2);

int main () {
    int n, m, k;

    scanf("%d", &n);

    int vet[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &m[i]);
    }

    for (int i = 0; i < n-1; i++) {
        
        if (m[i] != m[i+1]) {
            m[i] = mdc(m[i], m[i+1]);
        }
        else {
            m[i] = mdc(m[i], m[i+2]);
        }
    }

    return 0;
}

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}