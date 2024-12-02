#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {

    int chislo, predpolojenie;



    srand(time(NULL));

    chislo = 1 + rand() % 100;
    //    cout << chislo << endl;


    TUK:

        cout << "Guess (1 to 100): ";
    cin >> predpolojenie;

    if (chislo == predpolojenie) {
        cout << "Congrats, you guessed it right, it's " << predpolojenie << endl;
    }
    else {
        goto TUK;
    }

    system("pause");


    return 0;
}