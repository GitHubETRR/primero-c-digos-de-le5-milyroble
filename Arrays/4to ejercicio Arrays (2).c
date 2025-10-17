#include <stdio.h>
#define tamanio 100

int main() {
    int v[tamanio];
    int i, max, min;

    printf("Elegí 100 valores entre 10 y 40:\n");

    for(i = 0; i < tamanio; i++) {
        do {
            scanf("%d", &v[i]);

            if(v[i] < 10 || v[i] > 40)
                printf("Valor fuera de rango. Ingresá un número entre 10 y 40.\n");

        } while(v[i] < 10 || v[i] > 40);
    }

    max = v[0];
    min = v[0];

    for(i = 1; i < tamanio; i++) {
        if(v[i] > max)
            max = v[i];
        if(v[i] < min)
            min = v[i];
    }

    printf("El valor máximo es %d\n", max);
    printf("El valor mínimo es %d\n", min);
    printf("El máximo se repite en la posición: ");

    for(i = 0; i < tamanio; i++)
        if(v[i] == max)
            printf("%d ", i);

    printf("\n");
    return 0;
}
