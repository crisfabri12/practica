#ifndef COLA_H
#define COLA_H
#include "nodo.h"

class cola
{
    public:
        cola();
        void push(int val);
        int pop();
    private:
        nodo *head;
        int sizee;
};

#endif // COLA_H
