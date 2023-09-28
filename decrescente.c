#include <string.h>
#include <stdlib.h>

#define N 10

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