#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double F;
    std::cout << "���뻪���¶ȣ�";
    std::cin >> F;
    double C = (F - 32) * 5 / 9;
    std::cout << "��������¶ȣ�" << std::fixed << std::setprecision(2) << C << std::endl;

    return 0;
}