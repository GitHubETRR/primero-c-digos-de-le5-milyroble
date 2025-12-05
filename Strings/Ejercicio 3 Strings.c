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

int vocales(char texto[]) {
    int i = 0, cont = 0;

    while (texto[i] != '\0') {
        if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u') {
            cont++;
        }
        i++;
    }

    return cont;
}

int main() {
    char cadena[50];
    int cantidadVocales;

    printf("Ingrese un texto sin espacios: ");
    scanf("%s", cadena);

    pasaMinuscula(cadena);

    cantidadVocales = vocales(cadena);

    printf("El texto en minúscula es: %s\n", cadena);
    printf("La cantidad de vocales es: %d\n", cantidadVocales);

    return 0;
}
