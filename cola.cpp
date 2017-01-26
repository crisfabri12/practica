#include "cola.h"

cola::cola()
{
    head = new nodo();
    sizee = 0;
}

int cola::pop()
{
    if (sizee == 0){
        return 0;
    }else if(sizee == 1)
    {
        int x = head->val;
        delete head;
        --sizee;
        return x;
    }else{
        nodo *temp = head;
        nodo *temp2 = temp->next;
        while(temp2->next!=NULL){
            temp = temp->next;
            temp2 = temp2->next;
        }
        int x = temp2->val;
        temp->next = NULL;
        delete temp2;
        --sizee;
        return x;

    }
}

void cola::push(int val)
{
    if(sizee==0)
    {
        head->val = val;
        head->next = NULL;
    }
    else{
        nodo *temp = head;
        nodo *nuevo = new nodo(val);

        nuevo->next = temp;
        head= nuevo;
    }
    ++sizee;


}
