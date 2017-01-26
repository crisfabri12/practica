#ifndef PILA_H
#define PILA_H
#include "nodo.h"

class pila
{
    public:
        pila();
        void push(int val);
        int pop();;
    private:
        nodo *head;
        int sizee;
};

#endif // PILA_H
