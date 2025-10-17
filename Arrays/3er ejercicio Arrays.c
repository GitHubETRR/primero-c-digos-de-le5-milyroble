#include <stdio.h>

int main() {
    int v[50];
    int i, comparador, repite = 0;

    printf("Elegí 50 valores entre 10 y 20:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &v[i]);
    }
    comparador = v[0];
    for(i = 1; i < 50; i++)
        if(v[i] > comparador)
            comparador = v[i];
            
    for(i = 0; i < 50; i++)
        if(v[i] == mayor)
            repite++;

    printf("El mayor es %d. Se repite %d veces.\n", mayor, repite);
    return 0;
}
