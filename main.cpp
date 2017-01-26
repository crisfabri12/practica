#include <iostream>
#include "lista.h"
#include "cola.h"
#include "pila.h"
#include "arbol.h"
#include "polygon.h"
#include "string.h"
#include "string"
using namespace std;
string pigLatin(string cad){
    char temp=cad[0];
    if (strchr("aeiouAEIOU",temp))
        return cad+"way";
    else{
        cad.c_str();
        int x=cad.size();
        if(temp=='q'){
            char aux =cad[1];
            for(int i=0;i<x-2;i++)
                cad[i]=cad[i+2];
            cad[x-2]=temp;
            cad[x-1]=aux;
        }
        else{
            for(int i=0;i+1<x;i++)
                cad[i]=cad[i+1];
            cad[x-1]=temp;
        }
        string nuevo(cad);
        return cad+"ay";
    }
}
int main()
{
//    lista l(4);
//    l.insertar(3,1);
//    l.insertar(6,3);
//    l.insertar(8,2);
//    l.borrar(4);
//    cout<<l.imprimir(0)<<"\n";
//    l.borrar(3);
//    cout<<l.imprimir(0)<<"\n";
//    l.actualizar(0,8);
//    cout<<l.imprimir(0)<<"\n";

//    cola c;
//    c.push(2);
//    c.push(5);
//    c.push(9);
//    cout<<c.pop();
//    cout<<c.pop();
//    cout<<c.pop();

//    pila p;
//    p.push(4);
//    p.push(8);
//    p.push(1);
//    cout<<p.pop()<<"\n";
//    cout<<p.pop()<<"\n";

//    Node *u = new Node(7);
//    Arbol a;
//    a.insertar(u,4);
//    cout<<a.imprimir(u,4)<<"\n";
//
//
//    point r(9,2);
//    point t(3,4);
//    point y(5,4);
//    point q[] ={r,t};
//    point x[] ={r,y};
//    pointarray f(q,2);
//    f.inser(2,y);
//    f.remov(1);
//    cout<<f.getSize()<<"\n";
//    point *d = f.get(0);
//    cout<<d->getx()<<"\n";
//    polygon g(q,2);
//    cout<<g.numpol()<<"\n";
//    cout<<g.numsizz();
//
//
//    string m;
//    cin>>m;
//    cout <<pigLatin(m);
//
//    return 0;

}
