#include<iostream>
using namespace std;
int main() {
    double x, y;
    cout << "ÊäÈëx:";
    cin >> x;
    if (x > 0 && x < 1)
        y = 3 - 2 * x;
    if (x >= 1 && x < 5)
        y = 1 / ((2 * x) + 1);
    if (x >= 5 && x < 10)
        y = x * x;
    cout << "yÎª" << y << endl;

    return 0;
}