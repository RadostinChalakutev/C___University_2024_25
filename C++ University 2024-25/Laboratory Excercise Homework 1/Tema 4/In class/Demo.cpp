#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int *id = new int[10];
    cin >> id;
    char id_numbers[10];

    bool isValid = true;
    string length=id;

    if (length.length()!=10) {
        cout<<"Invalid input data"<<endl;
        return 0;
    }

    for (int i = 0; i < 10; i++) {
        id_numbers[i] = id[i];
    }


    int year = id_numbers[0] * 10 + id_numbers[1];
    int month = id_numbers[2] * 10 + id_numbers[3];
    int day = id_numbers[4] * 10 + id_numbers[5];
    int x1=id_numbers[0];
    int x2=id_numbers[1];
    int x3=id_numbers[2];
    int x4=id_numbers[3];
    int x5=id_numbers[4];
    int x6=id_numbers[5];
    int firsControlNumber=id_numbers[6];
    int secondControlNumber=id_numbers[7];
    int thirdControlNumber=id_numbers[8];
    int fourthControlNumber=id_numbers[9];

    if (month >= 21 && month <= 32) {
        year += 1800;
        month -= 20;
    } else if (month >= 41 && month <= 52) {
        year += 2000;
        month -= 40;
    } else {
        year += 1900;
    }

    if (year >= 1800 && year <= 2099) {
        isValid = true;
    } else {
        isValid = false;
    }

    if (day >= 1 && day <= 31) {
        isValid = true;
    } else {
        isValid = false;
    }
    if (month >= 1 && month <= 12) {
        isValid = true;
    } else {
        isValid = false;
    }

    int controlNumber=(2*x1+4*x2+8*x3+5*x4+10*x5+9*x6+7*firsControlNumber+3*secondControlNumber+6*thirdControlNumber )%11;




    if (controlNumber == 10) {
        controlNumber = 0;
    }

    if (controlNumber!=fourthControlNumber) {
        isValid = false;
    }
    if (isValid) {
        cout << "1" << endl;//true
    } else {
        cout << "0" << endl;//false
    }

    return 0;
}
