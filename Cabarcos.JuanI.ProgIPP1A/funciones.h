#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{

    int id;
    char procesador[50];
    char marca[50];
    float precio;

}eNotebook;

#endif // FUNCIONES_H_INCLUDED

float aplicarDescuento(float precioOriginal);

int contarCaracteres(char cadena[], char caracterABuscar);

int ordenarPorMarcaYPrecio(eNotebook notebooks[], int tamN, int ordenPrecio, int ordenMarca);

void mostrarNotebooks(eNotebook notebooks[], int tamN);

void mostrarNotebook(eNotebook notebook);
