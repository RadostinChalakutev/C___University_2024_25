// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{

    float tekushtaOcenka;

    int broiOcenki = 0;
    float suma = 0;


    do {
        cout << "Vuvedete tekushta ocenka (2.00 do 6.00): ";
        cin >> tekushtaOcenka;

        if(tekushtaOcenka >= 2.0f && tekushtaOcenka <= 6.0f) {
            broiOcenki++;
            suma = suma + tekushtaOcenka;

            cout << "Srednoaritmetichno: " << suma / broiOcenki << endl;
        }

    } while (tekushtaOcenka != 0);




}