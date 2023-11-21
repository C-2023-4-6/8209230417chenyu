#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double F;
    std::cout << "输入华氏温度：";
    std::cin >> F;
    double C = (F - 32) * 5 / 9;
    std::cout << "输出摄氏温度：" << std::fixed << std::setprecision(2) << C << std::endl;

    return 0;
}