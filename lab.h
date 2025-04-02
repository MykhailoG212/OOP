#include <iostream>
#include <cmath>
struct Point
{
    double x, y;
};

double distance(const Point &p1, const Point &p2);
struct Triangle
{
    Point A, B, C;

    double area() const;
    bool contains(const Point &P) const;
};
double heronArea(const Triangle &t);
int vir(const Triangle &t);