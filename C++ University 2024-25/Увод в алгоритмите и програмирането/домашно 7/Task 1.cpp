#include <iostream>
using namespace std;

int main(){

  int arr[5];
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  int min=arr[0];
  int min_index=0;

  for(int i=1;i<5;i++){
    if(arr[i]<min){
      min=arr[i];
      min_index=i;

    }

  }
  cout<<min<<endl;

  cout<<min_index<<endl;

}