#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int numbers[n];
    int count=0;

    while(count<n&&cin>>numbers[count]){
        count++;
    }

    for(int i=count-1;i>=0;i--){
        cout<<numbers[i]<<" ";

     }
}