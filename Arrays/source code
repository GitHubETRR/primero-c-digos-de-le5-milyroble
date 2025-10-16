#include <stdio.h>

int main() {
    int v[50];
    int i, mayor, repite = 0;

    printf("Elegí 50 valores entre 10 y 20:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &v[i]);
    }

    mayor = v[0];
    for(i = 1; i < 50; i++)
        if(v[i] > mayor)
            mayor = v[i];

    for(i = 0; i < 50; i++)
        if(v[i] == mayor)
            repite++;

    printf("El mayor es %d y se repite %d veces.\n", mayor, repite);
    return 0;
}
