#include <stdio.h>

int main() {
    int piso_actual = 0;
    int piso_llamada;
    int piso_seleccionado;
    char opcion;

    do {
        printf("Seleccione una opcion:\n");
        printf("a. Llamar ascensor\n");
        printf("b. Seleccionar piso\n");
        printf("c. Mostrar piso actual\n");
        printf("d. Salir\n");

        scanf(" %c", &opcion);

        switch(opcion) {
            case 'a':
                printf("Ingrese el piso desde donde llama al ascensor: ");
                scanf("%d", &piso_llamada);

                while(piso_actual != piso_llamada) {
                    if(piso_actual < piso_llamada) {
                        piso_actual++;
                        printf("Ascensor en piso %d\n", piso_actual);
                    } else {
                        piso_actual--;
                        printf("Ascensor en piso %d\n", piso_actual);
                    }
                }

                printf("El ascensor ha llegado al piso %d\n", piso_actual);
                break;
            case 'b':
                printf("Ingrese el piso al que desea ir: ");
                scanf("%d", &piso_seleccionado);

                if(piso_seleccionado == piso_actual) {
                    printf("El ascensor ya se encuentra en el piso %d\n", piso_actual);
                } else {
                    for(int i = piso_actual; i < piso_seleccionado; i++) {
                        piso_actual++;
                        printf("Ascensor en piso %d\n", piso_actual);
                    }
                    for(int i = piso_actual; i > piso_seleccionado; i--) {
                        piso_actual--;
                        printf("Ascensor en piso %d\n", piso_actual);
                    }
                    printf("El ascensor ha llegado al piso %d\n", piso_actual);
                }
                break;
            case 'c':
                switch(piso_actual) {
                    case 0:
                        printf("El ascensor se encuentra en la planta baja.\n");
                        break;
                    case 1:
                        printf("El ascensor se encuentra en el primer piso.\n");
                        break;
                    case 2:
                        printf("El ascensor se encuentra en el segundo piso.\n");
                        break;
                    case 3:
                        printf("El ascensor se encuentra en el tercer piso.\n");
                        break;
                    default:
                        printf("El ascensor se encuentra en el piso %d.\n", piso_actual);
                }
                break;
            case 'd':
                printf("Gracias por utilizar el ascensor.\n");
                break;
            default:
                printf("Opcion no valida. Por favor ingrese una opcion valida.\n");
        }

    } while(opcion != 'd');

    return 0;
}
