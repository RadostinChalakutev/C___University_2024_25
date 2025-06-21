#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Bulgarian");

    int x, y, x1, y1, r;

    cout << "Въведете координати на център на окръжност: ";
    cin >> x1 >> y1;

    cout << "Въведете дължина на радиус на окръжността: ";
    cin >> r;

    cout << "Въведете координати на точка: ";
    cin >> x >> y;

    double res = (x-x1)*(x-x1) + (y-y1)*(y-y1);

    if(res > r*r) cout << "точката се намира извън окръжността \n";
    else if(res == r*r) cout << "точката се намира на окръжността \n";
    else cout << "точката се намира в окръжността \n";

    return 0;
}