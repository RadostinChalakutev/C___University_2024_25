#include <iostream>
using namespace std;

class Product {
    public:
    Product(string n, double p, int s);
 void read();
    string getName()const;
    double getPrice()const;
    void print()const;
private:
    string name;
    double price;
    int score;

};

int main() {
string p;
    p.read();

    return 0;
}