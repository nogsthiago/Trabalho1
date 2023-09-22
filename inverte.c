#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 10

double* inverte(double* num) {
    double* aux = malloc(N * sizeof(double));
    if (aux == NULL) {
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < N; i++) {
        aux[i] = num[N - i - 1];
    }

    memcpy(num, aux, N * sizeof(double));
    free(aux);

    return num;
}
