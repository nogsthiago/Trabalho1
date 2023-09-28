#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double* inverte(double* num);
double* decrescente(double* num);
double* crescente(double* num);


#define N 10

int main(){
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
    for (int i = 0; i < N; i++){
        printf("%.2lf\t", num[i]);
    }

    printf("\n\nArray_decrescente =\t");
    decrescente(num);
    for (int i = 0; i < N; i++){
        printf("%.2lf\t", num[i]);
    }
    printf("\n");
    
    return 0;
}
