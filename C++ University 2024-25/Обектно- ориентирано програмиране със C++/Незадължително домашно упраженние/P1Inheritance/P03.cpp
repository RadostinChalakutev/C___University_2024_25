

#include <iostream>
using namespace std;

class Fruit {
string color;
double weight;
public:
Fruit(string color, double weight);
void set_color(string new_color);
string get_color();
void set_weight(double new_weight);
double get_weight();
void print();

};
class Orange : public Fruit {
int thickness;
int nr_seeds;
public:
Orange(string color, double weight, int thickness, int nr_seeds);
void set_thickness(int new_thickness);
int get_thickness();
void set_nr_seeds(int new_seeds);
int get_nr_seeds();
void print();
};
int main() {
    Orange blue_orange("blue", 1, 21, 45);
    Orange red_orange("red", 2, 26, 60);

    blue_orange.print();
    red_orange.print();
    Fruit* fruit = &blue_orange;
    fruit->print();
    return 0;
}

Fruit::Fruit(string color, double weight) {
this->color = color;
this->weight = weight;
}
void Fruit::print() {
cout << "Fruit color is " << color << endl << " and weight is " << weight << endl;
}
void Fruit::set_color(string color) {
this->color = color;
}

void Fruit::set_weight(double weight) {
this->weight = weight;
}

string Fruit::get_color() {
return color;
}

double Fruit::get_weight() {
return weight;
}

Orange::Orange(string color, double weight, int thickness, int nr_seeds)
: Fruit(color, weight) {
this->thickness = thickness;
this->nr_seeds = nr_seeds;
}

void Orange::set_thickness(int thickness) {
this->thickness = thickness;
}

void Orange::set_nr_seeds(int seeds) {
this->nr_seeds = seeds;
}

int Orange::get_thickness() {
return thickness;
}

int Orange::get_nr_seeds() {
return nr_seeds;
}
void Orange::print() {
Fruit::print();
cout << "Orange thickness is " << thickness << " and number of seeds is " << nr_seeds << endl;
}



