#include <iostream>

using namespace std;

int main(){
    cout<<"Number: ";
    int number;
    cin>>number;

    int absNumber = abs(number);
    int counter=0;

    while(absNumber>0){
      absNumber = absNumber/3;
      counter++;
    }
    int* reminder=new int[counter];
    absNumber=abs(number);
    for(int i=0;i<counter;i++){
      reminder[i]=absNumber%3;
      absNumber=absNumber/3;

    }
    cout<<number<<"(10)"<<endl;

    for(int i=0;i<counter;i++){
      cout<<reminder[i];
    }
    cout<<" (3)";
    delete []reminder;

    return 0;

}