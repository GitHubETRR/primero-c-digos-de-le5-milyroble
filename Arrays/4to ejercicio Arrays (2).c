#include <stdio.h>
#define TAM 100

int main() {
    int v[TAM];
    int i, max, min;

    printf("Elegí 100 valores entre 10 y 40:\n");
    for(i = 0; i < TAM; i++) {
        scanf("%d", &v[i]);
    }

    max = v[0];
    min = v[0];
    for(i = 1; i < TAM; i++) {
        if(v[i] > max) max = v[i];
        if(v[i] < min) min = v[i];
    }

    printf("El valor máximo es %d\n", max);
    printf("El valor mínimo es %d\n", min);
    printf("El máximo se repite en posiciones: ");
    for(i = 0; i < TAM; i++)
        if(v[i] == max)
            printf("%d ", i);
    printf("\n");

    return 0;
}
