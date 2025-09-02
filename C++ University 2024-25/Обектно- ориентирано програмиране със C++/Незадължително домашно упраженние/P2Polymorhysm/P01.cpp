#include <iostream>
using namespace std;

class Shape{

  public:

    virtual void draw();


    Shape();
};

class Circle:public Shape{
  public:
     void draw();
};
class Square:public Shape{
  public:
     void draw();

};
class Triangle:public Shape{
  public:
    void draw();
};
int main(){
  Shape*shapes[4];
  shapes[0] = new Shape();
  shapes[1] = new Circle();
  shapes[2] = new Square();
  shapes[3] = new Triangle();

  for (int i = 0; i < 4; i++){
    shapes[i]->draw();
  }
}
Shape::Shape() {
  cout<<"construct"<<endl;

}
void Shape::draw() {
  cout<<"Drowing shape"<<endl;
}
void Circle::draw() {
  cout<<"Drawing a circle"<<endl;
}
void Square::draw() {
  cout<<"Drawing a square"<<endl;
}
void Triangle::draw() {
  cout<<"Drawing a triangle"<<endl;
}