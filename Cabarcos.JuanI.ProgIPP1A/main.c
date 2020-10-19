#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"

#define TAM_NOTEBOOK 5
#define ASC 1
#define DESC 0

int main()
{
    float precio;
    float precioFinal;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    precioFinal = aplicarDescuento(precio);

    printf("El precio con 5 por ciento de descuento es: %.2f", precioFinal);

    char cadena[50];
    char caracter;
    int contado;

    printf("\n\n\nIngrese una cadena de caracteres: ");
    fflush(stdin);
    gets(cadena);

    printf("Que caracter desea contar? ");
    fflush;
    caracter = getchar();

    contado = contarCaracteres(cadena, caracter);

    printf("El caracter %c aparece %d vez/veces.", caracter, contado);

    printf("\n\n\n");

    // NO HICE A TIEMPO A INICIALIZAR LA ESTRUCT

    eNotebook listaNotebooks[TAM_NOTEBOOK] = {{1, "Potente", "Intel", 300}, {2, "Intermedio", "Intel", 200}, {3, "Debil", "AMD", 100}};

    ordenarPorMarcaYPrecio(listaNotebooks, TAM_NOTEBOOK, ASC, ASC);

    mostrarNotebooks(listaNotebooks, TAM_NOTEBOOK);

    return 0;
}
