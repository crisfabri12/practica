#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "nodo.h"


class lista
{
    public:
        lista(int x);
        void insertar(int val,int pos);
        void borrar(int key);
        void actualizar(int pos,int val);
        int imprimir(int x);
    private:
        nodo *head;
        int sizee;

};
#endif // LISTA_H
