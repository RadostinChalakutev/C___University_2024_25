#include <iostream>
using namespace std;

class Product {
public:
    Product();

    Product(string n, double p, int s);

    void read();

    string get_name() const;

    double get_price() const;

    void print() const;

private:
    string name;
    double price;
    int score;
};

int main() {
    string country;
    cin >> country;
    string state;
    cin >> state;
    if (country == "USA" && state != "HI") {
        cout<<1<<endl;
    }
    if (! (country != "USA" && state == "HI")) {
        cout<<2<<endl;
    }
    //на конзолата трябва да се появят 2 числа ако изразите са еднакви в двете if проверки

}
