#include <iostream>
#include <fstream>
using namespace std;

void mergeSortedFile(const string& file1, const string& file2, const string& outputFile){
  ifstream input1(file1),input2(file2);
  ofstream output(outputFile);

  if(!input1.is_open() || !input2.is_open()|| !output.is_open()  ){
    cerr<<"Error"<<endl;
    return;

  }
  int num1, num2;
  bool hasNum1=bool(input1>>num1);
  bool hasNum2=bool(input2>>num2);

  while(hasNum1 || hasNum2){
    if(hasNum1&&(!hasNum2||num1<=num2)){
    output<<num1<<endl;
    hasNum1=bool (input1>>num1);
    }
    else if(hasNum2){
      output<<num2<<endl;
      hasNum2=bool(input2>>num2);

      }
  }
input1.close();
input2.close();
output.close();

}

int main(){
  string file1, file2;
  cin>>file1>>file2;
  string output;
  string output1;
  mergeSortedFile(file1, file2, output);
  return 0;
}