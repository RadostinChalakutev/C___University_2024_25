#include <iostream>
using namespace std;

int main(){
  cout<<"Enter your weigths: "<<endl;
  double weigth;
  cin>>weigth;

  cout<<"Enter your gender(m for men, w for women: "<<endl;
  char gender;
  cin>>gender;
  double shoe=0.400;
  double cloths=1;
  cout<<"Enter your height in meter with point : "<<endl;
  double height;
  cin>>height;


  if(gender == 'w'){
    weigth = weigth +2;
    weigth = weigth -(2*shoe);
    weigth = weigth-cloths;

  }else if(gender == 'm'){
    weigth = weigth -3;
    weigth = weigth -(2*shoe);
    weigth = weigth-cloths;
  }
  double BMI=weigth/(height*height);

  cout<<"BMI="<<BMI<<endl;

  return 0;
}