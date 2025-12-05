#include <stdio.h>

void pasaMinuscula(char texto[]) {
    int i = 0;

    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = texto[i] + 32;
        }
        i++;
    }
}

int main() {
    char cadena[30];

    printf("Ingrese un texto sin espacios: ");
    scanf("%s", cadena);

    pasaMinuscula(cadena);

    printf("El texto en minuscula es: %s\n", cadena);

    return 0;
}
