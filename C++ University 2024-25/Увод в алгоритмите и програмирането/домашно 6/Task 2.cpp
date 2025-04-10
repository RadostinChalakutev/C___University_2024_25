#include <iostream>
using namespace std;


int main(){
    char name[10]={'c','h','a','l','a','k','u','t','e','v'};
    char target[4]={'a','b','c','d'};
    int brojproverki=0;

    for(int i=0;i<10;i++){
        char x=target[i];
        bool nameren=false;
        cout<<"Searching for symbol "<<x<<endl;
        for(int j=0;j<10;j++){
            brojproverki++;
            cout<<"Check "<<brojproverki<<endl;
            if(name [j]==x){
                cout<<"Yes!"<<endl;

                nameren=true;
                break;
            }else{
                cout<<"No!"<<endl;
            }
        }
        if(nameren==true){
            cout<<"Symbol "<<x<<" found after "<<brojproverki<<" checks."<<endl;

        }else{
            cout<<"Symbol "<<x<<" not found after "<<brojproverki<<" checks."<<endl;
        }
        brojproverki=0;
    }
}