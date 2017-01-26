#include "pila.h"

pila::pila()
{
    head = new nodo();
    sizee = 0;
}

void pila::push(int val)
{
    if(sizee == 0)
    {
        head->val = val;
        head->next = NULL;

    }
    else{
        nodo *temp = head;
        nodo *nuevo = new nodo(val);
        nuevo->next = temp;
        head = nuevo;
    }
    ++sizee;
}

int pila::pop()
{
    if(sizee == 0)
    {
        return 0;
    }
    nodo *temp = head;
    int x = temp->val;
    head = temp->next;
    delete temp;
    -sizee;
    return x;
}
