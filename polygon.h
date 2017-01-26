#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
class point {
private:
    int x, y;
public:
    point();
    point(int nx,int ny);
    point(point &t);
    void setx(int nx);
    void sety(int ny);
    int getx();
    int gety();
    void print();
    void mod(int nx, int ny);
};

class pointarray{
private:
    int sizze;
    point *p;
public:
    pointarray();
    pointarray(const point points[], const int sizze);
    pointarray(const pointarray& pv);
    void point_f(const point &p);
    void inser(const int position, const point &p);
    void remov(const int position);
    int getSize();
    void clearr();
    point *get(int x);



};
class polygon{
protected:
    pointarray *p;
    int tam;
public:
    polygon();
    polygon(pointarray &x);
    polygon(point x[],int sizze);
    double area();
    int numpol();
    int numsizz();
    const point*getpoint();
};
class Rectangle:public polygon{
public:
    Rectangle(point &a,point &b);
    Rectangle(int x1,int y1, int x2,int y2);
    double area();
};
class triangle: public polygon{
public:
    triangle(point &a,point &b,point &c);
    double area();

};

#endif // POLYGON_H_INCLUDED
