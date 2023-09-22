#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define N 10

double* crescente(double* num) {
    double aux;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (num[j] <= num[i]) {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    return num;
}

double* decrescente(double* num) {
    double aux;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (num[j] >= num[i]) {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    return num;
}

double* inverte(double* num) {
    double* aux = malloc(N * sizeof(double));
    if (aux == NULL) {
        perror("Falha na alocação de memória");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < N; i++) {
        aux[i] = num[N - i - 1];
    }

    memcpy(num, aux, N * sizeof(double));
    free(aux);

    return num;
}

int main() {
    double num[N] = {4.2, 9.9, 1.2, 7.4, 2.8, 3.9, 6.5, 0.7, 11.2, 1.9};

    printf("Array inicial =\t");
    for (int i = 0; i < N; i++) {
        printf("%.2lf\t", num[i]);
    }

    printf("\n\nArray_inverte =\t");
    inverte(num);
    for (int i = 0; i < N; i++) {
        printf("%.2lf\t", num[i]);
    }

    printf("\n\nArray_crescente =\t");
    crescente(num);
    for (int i = 0; i < N; i++) {
        printf("%.2lf\t", num[i]);
    }

    printf("\n\nArray_decrescente =\t");
    decrescente(num);
    for (int i = 0; i < N; i++) {
        printf("%.2lf\t", num[i]);
    }
    printf("\n");
    
    return 0;
}
