#include "lista.h"

lista::lista(int x)
{
    nodo *nuevo = new nodo(x);
    head = nuevo;
    ++sizee;
}
void lista::insertar(int val,int pos)
{
    nodo *temp = new nodo();
    nodo *nuevo = new nodo(val);
    temp = head;
    if(pos == 0)
    {
        nuevo->next = head;
        head = nuevo;
    }
    else{
        int i= 0;
        while((temp->next != NULL)&&(i<pos))
        {
            temp = temp->next;
            ++i;
        }
        nuevo->next = temp->next;
        temp->next = nuevo;

    }
    sizee++;
}

void lista::borrar(int key)
{
    nodo *temp = head;
    nodo *temp1 = head->next;
    int cont =0;
    if(head->val == key){
        head = temp->next;
    }else{
        while(temp1){
            if(temp1->val == key){
               nodo *aux = temp1;
               temp->next = temp1->next;
               delete aux;
               cont++;
               sizee--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }

}

void lista::actualizar(int pos,int val)
{
    nodo *temp = head;
    if(pos==0){
        head->val = val;
    }
    for(int i=1;temp->next!= NULL;i++)
    {
        if(pos == i)
            temp->val = val;
            return;
        temp = temp->next;
    }

}

int lista::imprimir(int x)
{
    nodo *temp = head;
    for(int i=0;temp->next != NULL;i++){
        if(x==i){
            return temp->val;
        }else{
            temp = temp->next;
        }
    }
    return temp->val;
}


