#include <iostream>
using namespace std;
bool spot(string s, int start, int end){
  if(start>=end)return true;
  if(s[start]==s[end]){
    return spot(s,start+1,end-1);

    return false;
  }
}
int main(){
  string str="rotor";
  spot(str,0,str.length()-1);

}