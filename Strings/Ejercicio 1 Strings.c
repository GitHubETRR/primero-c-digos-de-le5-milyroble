#include <stdio.h>

int Dimension(char texto[]) {
    int i = 0;

    while (texto[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
    char cadena[100];
    int largo;

    printf("Ingrese un texto sin espacios: ");
    scanf("%s", cadena);

    largo = Dimension(cadena);

    printf("El largo de la cadena ingresada  es: %d\n", largo);

    return 0;
}
