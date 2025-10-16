#include <stdio.h>

int main() {
    int n, i; A[n], B[n];
    int prod = 0;
    printf("Tamaño de los vectores: ");
    scanf("%d", &n);
    printf("Elementos de A:\n");
    for(i = 0; i < n; i++) scanf("%d", &A[i]);
    printf("Elementos de B:\n");
    for(i = 0; i < n; i++) scanf("%d", &B[i]);
    for(i = 0; i < n; i++) prod += A[i] * B[i];
    printf("Producto escalar = %d", prod);
    return 0;
}
