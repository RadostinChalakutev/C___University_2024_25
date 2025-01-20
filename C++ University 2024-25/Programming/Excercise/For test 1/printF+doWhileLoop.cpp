#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    unsigned int chislo, predpolojenie;

    cout << "Vuvedete chislo, koeto da bde poznato (1 do 999999): ";
    cin >> chislo;

    system("cls");


    srand(time(NULL));

    int broqch = 0;

    do {
        //        cout << "Guess (1 to 999999): ";
        predpolojenie = 1 + (rand() % 1000) * 1000 + (rand() % 999);    //1 to 999999

        //        cout << predpolojenie << endl;

        printf("Guess (1 to 999999): %d\n", predpolojenie);

        broqch++;

    } while (chislo != predpolojenie);

    cout << "Congrats, you guessed it right, it's " << predpolojenie << endl;
    cout << "It took " << broqch << " tries." << endl;

    system("pause");


    return 0;
}