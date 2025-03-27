#include <iostream>
using namespace std;


int main(){

  int Sum=0;

  for(int counter=1;counter<=10000;counter++ ){

    Sum=Sum+(counter*counter);
    if(counter%100==0){
      cout<<"Sum after "<<counter<<" iterations:"<<Sum<<endl;
    }
  }

}