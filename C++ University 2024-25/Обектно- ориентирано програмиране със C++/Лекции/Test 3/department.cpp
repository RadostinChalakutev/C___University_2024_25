#include <iostream>
using namespace std;

#include "employee.h"

int main()
{  Department shipping("Shipping");
    Department qc("Quality Control",
         Employee("Tester, Tina", 50000));
    Department dept(qc);
    dept = shipping;
    return 0;
}