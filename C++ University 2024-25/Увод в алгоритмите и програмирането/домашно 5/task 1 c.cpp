#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double PIsum=1.0;
    double znak=-1.0;
    double prevPISum;
    int i=1;

    start:
    prevPISum=PIsum;
    PIsum+=znak*(1.0/(2*i+1));
    znak=-znak;
    i++;

    if (abs(PIsum-prevPISum)>0.000001) {
        goto start;
    }
    PIsum*=4;
    cout<<PIsum;
}