#include <stdio.h>

int main()
{
    int anionac, mesnac, dianac, anio, mes, dia, edad, faltan;

    do {
        printf("Ingrese el día actual:\n");
        scanf("%d", &dia);
    } while ((dia > 31) || (dia < 1));

    do {
        printf("Ingrese el mes actual:\n");
        scanf("%d", &mes);
    } while ((mes > 12) || (mes < 1));

    do {
        printf("Ingrese el año actual:\n");
        scanf("%d", &anio);
    } while (anio < 0);
    
    do {
        printf("Ingrese el día de su fecha de nacimiento:\n");
        scanf("%d", &dianac);
    } while ((dianac > 31) || (dianac < 1));

    do {
        printf("Ingrese el mes de su fecha de nacimiento:\n");
        scanf("%d", &mesnac);
    } while ((mesnac > 12) || (mesnac < 1));

    do {
        printf("Ingrese el año de su fecha de nacimiento:\n");
        scanf("%d", &anionac);
    } while (anionac < 1);
    
    edad = anio - anionac;

    if (mesnac > mes || (mesnac == mes && dianac > dia)) {
        edad = edad - 1;
    }
    
    if (mesnac == mes && dianac == dia) {
        printf("¡Feliz cumpleaños!\n");
    }
    if (mesnac == mes) {
        if (dianac > dia) {
            faltan = dianac - dia;
            printf("Faltan %d días para tu cumpleaños.\n", faltan);
        } else if (dianac < dia) {
            printf("Tu cumpleaños ya pasó.\n");
        }
    }
    printf("Su edad actual es: %d \n", edad);
    if (edad >= 18) {
        printf("Usted debe votar obligatoriamente.\n");
    } else if (edad >= 16) {
        printf("Usted puede votar, pero no es obligatorio.\n");
    } else {
        printf("Usted no puede votar aún.\n");
    }

    return 0;
}

