#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>

typedef void* dataType;
define_list(dataType);

typedef struct snodo{ //snodo es el nombre de la estructura
    dataType valor;
    struct snodo *sig; //El puntero siguiente para recorrer la lista enlazada
}tnodo; //tnodo es el tipo de dato para declarar la estructura

typedef tnodo *tpuntero; //Puntero al tipo de dato tnodo para no utilizar punteros de punteros

void insertarEnLista (tpuntero *cabeza, dataType e);
void imprimirLista (tpuntero cabeza);
void borrarLista (tpuntero *cabeza);
tpuntero cabeza; //Indica la cabeza de la lista enlazada, si la perdemos no podremos acceder a la lista

#endif // LIST_H
