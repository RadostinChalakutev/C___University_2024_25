#include <iostream>
using namespace std;


/*
class Shape {
public:
virtual double perimeter() const = 0;
virtual double area() const = 0;
};

class Triangle: public Shape {
public:
...
virtual double perimeter() const
{ return a + b + c; }
virtual double area() const
{   double p = (a + b + c)/2;
return sqrt(p*(p-a)*(p-b)*(p-c));
}
private:
double a, b, c;
};

class Circle: public Shape {
public:
...
virtual double perimeter() const
{ return 2*PI*r; }
virtual double area() const
{ return PI*r*r; }
private:
double r;
};
...
int main()
{
//  Shape* s = new Shape;               // ERROR!!
Shape* s = new Triangle(4, 5, 6);   // First s is a triangle
cout << "Area is " << s.area() << "\n";
s = new Circle(10);                 // Now it is a square
cout << "Area is " << s.area() << "\n";
...
return 0;
}*/