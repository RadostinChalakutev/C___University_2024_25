#include <iostream>
#include <string>
using namespace std;



int main() {
    string input;
    cin >> input;
    if (input.length() !=10) {
        cout << "Invalid input data!" << endl;
        return 0;
    }

    int id[10];

    for (int i = 0; i <10; i++) {
        id[i] = input[i]-'0';


    }
    int year=id[0]*10+id[1];
    int month=id[2]*10+id[3];
    int day=id[4]*10+id[5];


    if (month>=1&&month<=12) {
        year+=1900;

    }else if (month>=21&&month<=32) {
        year+=1800;
        month-=20;
    }else if (month>=41&&month<52) {
        year+=2000;
        month-=40;
    }
   

    int x10=(2*id[0]+4*id[1]+8*id[2]+5*id[3]+10*id[4]+9*id[5]+7*id[6]+3*id[7]+6*id[8])%11;

    if (x10==10) {
        x10=0;
    }



    cout<<0<<endl;









}
