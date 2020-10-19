#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

float aplicarDescuento(float precioOriginal){

    float precioConDescuento;

    precioConDescuento = precioOriginal * 0.95;

    return precioConDescuento;

}

int contarCaracteres(char cadena[], char caracterABuscar){

    int contador = 0;

    for(int i = 0; i < strlen(cadena); i++){

        if(caracterABuscar == cadena[i]){

            contador++;

        }

    }

    return contador;

}

int ordenarPorMarcaYPrecio(eNotebook notebooks[], int tamN, int ordenPrecio, int ordenMarca){

    int error = 1;
    int i;
    int j;
    eNotebook notebookAux;

    if(notebooks != NULL && tamN > 0 && ordenMarca >= 0 && ordenMarca <= 1 && ordenPrecio >= 0 && ordenPrecio <= 1){

        for(i = 0; i < tamN - 1; i++){

            for(j = i + 1; j < tamN; j++){

                // CRITERIOS DE ORDENAMIENTO
                if((ordenMarca && (strcmp(notebooks[i].marca, notebooks[j].marca) > 0)) ||
                ((!ordenMarca) && (strcmp(notebooks[i].marca, notebooks[j].marca))< 0) ||
                ((strcmp(notebooks[i].marca, notebooks[j].marca) == 0) && ((notebooks[i].precio > notebooks[j].precio) && ordenPrecio)) ||
                ((strcmp(notebooks[i].marca, notebooks[j].marca) == 0) && ((notebooks[i].precio < notebooks[j].precio) && !ordenPrecio))){

                    // SWAP / BURBUJEO
                    notebookAux = notebooks[i];
                    notebooks[i] = notebooks[j];
                    notebooks[j] = notebookAux;

                }

            }

        }

        error = 0;

    }

    return error;

}

void mostrarNotebooks(eNotebook notebooks[], int tamN){

    if((notebooks != NULL) && (tamN > 0)){

        printf("       ***  NOTEBOOKS  ***  \n\n");
        printf("   ID      Procesador     Marca    Precio\n");
        printf("-----------------------------------------\n");
        for(int i = 0; i < tamN; i++){

            mostrarNotebook(notebooks[i]);

        }

    }
    printf("\n\n");

}

void mostrarNotebook(eNotebook notebook){

    printf("  %d       %s    %s      %.2f\n", notebook.id, notebook.procesador, notebook.marca, notebook.precio);

}
