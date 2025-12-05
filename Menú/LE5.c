#include <stdio.h>

void interfazcine(void);

int main() {
    int opcion, asientos_ocupados, n;
    int total_asientos = 50;
    int horario1 = 14;
    int horario2 = 22;
    
    interfazcine();
    scanf("%d", &opcion);
    
    switch(opcion) {
    case 1:
        printf("\n--- Horarios de funciones para hoy ---\n");
        for(int i = horario1; i <= horario2; i += 2) {
            printf("%d hs\n", i);
        }
        break;

    case 2:
        printf("Ingrese el número de asientos ocupados: ");
        scanf("%d", &asientos_ocupados);

        if(asientos_ocupados > total_asientos) {
            printf("Mayor cantidad de asientos ocupados que la total. Vuelva a ingresar.\n");
        } else if(asientos_ocupados < 0) {
            printf("Cantidad de asientos ocupados negativa. Vuelva a ingresar.\n");
        } else if(asientos_ocupados == total_asientos) {
            printf("Todos los asientos de la sala se encuentran ocupados. Vuelva a ingresar.\n");
        } else {
            n = total_asientos - asientos_ocupados;
            printf("Cantidad de asientos disponibles: %d\n", n);
        }
        break;

    case 3:
        printf("Gracias por visitar nuestra interfaz.\n");
        break;

    default:
        printf("Opción invalida. Vuelva a ingresar.\n");
    }

    return 0;
}
void interfazcine(void){
    printf("\n--- INTERFAZ CINE ---\n");
    printf("1. Horarios de funciones disponibles en el día.\n");
    printf("2. Mostrar cantidad de asientos disponibles.\n");
    printf("3. Salir.\n");
    printf("Ingrese una opción: ");
}
