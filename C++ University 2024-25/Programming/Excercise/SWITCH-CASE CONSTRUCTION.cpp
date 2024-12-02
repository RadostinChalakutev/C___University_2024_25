#include <iostream>
using namespace std;


int main() {

    int izbor;

    cout << "Izberete qstie ot 1 do 5: ";
    cin >> izbor;

    switch (izbor) {
        case 1: cout << "Purjen oriz sus zelenchuci" << endl; break;
        case 2: cout << "Purjen oriz sus qica zelenchuci" << endl; break;
        case 3: cout << "Purjen oriz sus pile i zelenchuci" << endl; break;
        case 4: cout << "Purjen sladoled" << endl; break;
        case 5: cout << "Pile po imperatorski" << endl; break;

        default:
            cout << "Voda" << endl;
        break;
    }


    return 0;
}