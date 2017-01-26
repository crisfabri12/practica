#include <iostream>
using namespace std;
#include "polygon.h"
#include <math.h>
point::point()
{
    x = 0;
    y = 0;
}
point::point(int nx,int ny)
{
    x = nx;
    y = ny;
}
point::point(point &t)
{
    x = t.x;
    y = t.y;
}
void point::print() {
cout << "(" << x << "," << y << ")";
}

void point::setx(int nx){
x = nx;
}
void point::sety(int ny){
y = ny;
}
int point::getx(){
return x;
}
int point::gety(){
return y;
}
void point::mod(int nx,int ny){
x = nx;
y = ny;
}

pointarray::pointarray()
{
    sizze = 0;
    p = new point[0];
}
pointarray::pointarray(const point points[],const int siz){
sizze = siz;
p =new point[siz];
int i=0;
for (i=0;i < siz;++i)
    p[i] = points[i];
}
pointarray::pointarray(const pointarray& pv)
{
    p = new point[pv.sizze];
    sizze = pv.sizze;
    for(int i = 0; i < sizze;++i)
        p[i] = pv.p[i];

}
int pointarray::getSize(){
return sizze;
}
void pointarray::point_f(const point &x){
    int i;
    point *h = new point[sizze];
    h = p;
    p = new point[++sizze];
    for(i=0;i<sizze;i++)
        p[i] = h[i];
    p[--i] = x;
}
void pointarray::inser(const int position, const point &x){
    int i,j;
    point *h = new point[sizze];
    h = p;
    p = new point[++sizze];
    for(i=0,j=0;i<sizze;++i)
        if(i != position){
            p[i] = h[j];
            ++j;
        }else
           p[i] = x;
}

void pointarray::remov(const int position)
{
    int i,j;
    point *h = new point[sizze];
    for (i = 0;i < sizze;++i)
        h[i] = p[i];
    p = new point[--sizze];
    for (i=0;i<sizze;++i)
        if (i != position){
            p[i] = h[i];
        }else
            p[i] = h[i+1];
            ++i;
    --sizze;
}

void pointarray::clearr()
{
    sizze = 0;
    delete [] p;
    p = new point[0];


}

point *pointarray::get(const int pos)
{
    return &p[sizze-pos-1];

}
polygon::polygon()
{
    p = new pointarray();
    tam = 0;
}
polygon::polygon(point x[],int sizz){
    this->p = new pointarray(x,sizz);
    ++tam;
}
polygon::polygon(pointarray& x) {
    this->p = new pointarray(x);
    ++tam;
}
int polygon::numsizz(){
    return p->getSize();

}
int polygon::numpol(){
    return this->tam;
}

Rectangle::Rectangle(point &a,point &b){
    point *d=new point[4];
    int x = a.getx();
    int y = a.gety();
    int x1=b.getx();
    int y1=b.gety();
    d[1] =point(x,y);
    d[2] =point(x1,y);
    d[3] =point(x,y1);
    d[4] =point(x1,y1);
    pointarray *l = new pointarray(d,4);
    p = l;
    this->tam++;

}
Rectangle::Rectangle(int x, int y, int x1, int y1){
    point *a=new point[4];
    a[1] =point(x,y);
    a[2] =point(x1,y);
    a[3] =point(x,y1);
    a[4] =point(x1,y1);
    pointarray *l = new pointarray(a,4);
    p = l;
    this->tam++;
}
double Rectangle::area(){
    double largo = ((p->get(1)->getx())-p->get(4)->getx());
    double ancho = ((p->get(2)->gety())-(p->get(3)->gety()));
    return largo *ancho;

}
triangle::triangle(point &a,point &b,point &c){
    point *l=new point[3];
    l[1] = a;
    l[2] = b;
    l[3] = c;
    pointarray *k = new pointarray(l,3);
    p = k;
    this->tam++;
}
double triangle::area(){
    double lado1 = sqrt(pow(p->get(1)->getx()-p->get(2)->getx(),2)+pow(p->get(1)->gety()-p->get(2)->gety(),2));
    double lado2 = sqrt(pow(p->get(2)->getx()-p->get(3)->getx(),2)+pow(p->get(2)->gety()-p->get(3)->gety(),2));
    double lado3 = sqrt(pow(p->get(1)->getx()-p->get(3)->getx(),2)+pow(p->get(1)->gety()-p->get(3)->gety(),2));
}
