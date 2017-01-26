#ifndef ARBOL_H
#define ARBOL_H

#include <iostream>
class Node{
public:
    Node(int x);
    Node();
    int val;
    Node *der;
    Node *izq;

};

class Arbol
{
    public:
        Arbol();
        void insertar(Node *nodo,int val);
        void borrar(int key);
        int imprimir(Node*nodo,int key);
    private:
        Node *head;
        int sizee;

};

#endif // ARBOL_H
