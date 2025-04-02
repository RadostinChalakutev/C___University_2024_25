#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double PIsum = 1.0;
    int znak = -1;
    int i = 1;
    double prevVal = 0.0;
    double  end = 0.0001;

    while (fabs(PIsum - prevVal) >= end) {
        prevVal = PIsum;
        PIsum += znak * (1.0 / (2 * i + 1));
        znak = -znak;
        i++;
    }
    PIsum=PIsum*4;


}
