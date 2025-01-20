#include <iostream>
#include <set>
using namespace std;

int symetricDifferenceCount(const set<char> &setA, const set<char> &setB) {
    set<char>symmetricC;
    for (char elements:setA) {
        if (setB.count(elements)==0) {
            symmetricC.insert(elements);
        }
    }
    for (char elements:setB) {
        if (setA.count(elements)==0) {
            symmetricC.insert(elements);
        }
    }
    return symmetricC.size();

}

int main() {
    int sizeA,sizeB;
    string elementsA,elementsB;
    cin>>sizeA>>sizeB;
    cin>>elementsA>>elementsB;

    if (sizeA<0 || sizeA>20||sizeB<0 || sizeB>20) {
        cout<<"Invalid input data!"<<endl;
        return 0;

    }
    set<char>setA(elementsA.begin(),elementsA.begin()+sizeA);
    set<char> setB(elementsB.begin(),elementsB.begin()+sizeB);

    int result= symetricDifferenceCount(setA,setB);
    cout<<result<<endl;

    return 0;
}