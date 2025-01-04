#include <iostream>
using namespace std;


void differenceOfSet(char A[],char B[],char C[],int size) {

    for (int i = 0; i<size; i++) {
        if (A[i]=='1'&&B[i]=='0') {
            C[i]='1';

        }else {
            C[i]='0';
        }
    }
    C[size+1]='\0';
}


int main() {
    const int size=10;
    char A[size+1];
    char B[size+1];
    cin>>A;
    cin>>B;

    char C[size+1];
    differenceOfSet(A,B,C,size);

    cout<<C<<endl;
    return 0;

}