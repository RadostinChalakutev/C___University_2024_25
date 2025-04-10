#include <iostream>
using namespace std;
int main(){
  int number[6]={1,1,7,3,7,3};
  int target[4]={1,2,3,4};
  int brojproverki=0;

  for(int i=0;i<6;i++){
    int x=target[i];
    bool nameren=false;
    cout<<"Searching for number "<<x<<endl;
    for(int j=0;j<6;j++){
      brojproverki++;
      cout<<"Check "<<brojproverki<<endl;
      if(number[j]==x){
        cout<<"Yes!"<<endl;
        nameren=true;
        break;
      }else{
        cout<<"No!"<<endl;
      }
    }
    if(nameren==true){
      cout<<"Number "<<x<<" found after "<<brojproverki<<" checks."<<endl;

    }else{
      cout<<"Number "<<x<<" not found after "<<brojproverki<<" checks."<<endl;
    }
    brojproverki=0;
  }
}