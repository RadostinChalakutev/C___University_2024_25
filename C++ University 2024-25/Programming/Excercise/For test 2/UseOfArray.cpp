#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
#include <codecvt>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    const unsigned short int BROI_VICOVE = 16;

       setlocale(LC_ALL, "Bulgarian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned short int duljina;

    /*
    int a = 8;

    int* p = &a;     //3539095

    cout << a;   //8

    cout << p;    //8543650

    cout << *p;    //8

    */

    cout << "Въведете макс. дължина на изречението: ";
    cin >> duljina;

    char* izr = new char[duljina];

    cout << "Въведете изречение: ";
    //cin >> izr;

    cin.ignore();
    cin.getline(izr, duljina);

    for (int i = 1; i <= 100; i++) {
        cout << i<< ". " << izr << endl;
    }

    if (izr != nullptr) {
        delete[] izr;
        izr = nullptr;
    }

    system("pause");
    return 0;
}