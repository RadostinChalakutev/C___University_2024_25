#include <iostream>
using namespace std;

int square(int a, int b, int c) {
    int sqareResult=a/c;
    int totalResult=b/c;

    return sqareResult*totalResult;

}


int main() {

    int a;
    int b;
    int c;
    cin >> a >> b >> c;


    cout<<square(a,b,c);
    return 0;
}