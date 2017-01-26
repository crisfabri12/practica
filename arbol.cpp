#include "arbol.h"

Node::Node(int x)
{
    this->val = x;
    this->der = NULL;
    this->izq = NULL;
}

Node::Node()
{
    val=NULL;
    this->der = NULL;
    this->izq = NULL;
}


Arbol::Arbol()
{
    head = new Node();
    ++sizee;

}

void Arbol::insertar(Node*nodo,int val)
{
    Node *nuevo = new Node(val);
    if(nodo==NULL)
    {
        nodo = nuevo;
        std::cout<<nodo->val;
    }
    else if(val  <  nodo->val)
    {
        insertar(nodo->izq,val);
    }
    else if(val <  nodo->val)
    {
        insertar(nodo->der,val);
    }
}

int Arbol::imprimir(Node*nodo,int key)
{
    while(nodo!=NULL)
    {
        std::cout<<"---------------        ";
        if(nodo->val==key){
            std::cout<<"    -----------------"<<nodo->val;
            return nodo->val;
        }else if(nodo->val < key){
            nodo = nodo->der;
        }else
            nodo = nodo->izq;

    }

}
