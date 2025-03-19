#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream myFile;
  string fileName;
  cin>>fileName;
  myFile.open(fileName,ios::out);
  int counter=0;

  if (myFile.is_open()) {
      while (counter>=5) {
        myFile<<"Hello"<<endl;
        counter++;
      }
    }
    myFile.close();
  }
