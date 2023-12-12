#include<iostream>
using namespace std;
int yue(int num1, int num2) {
	while (num2 != 0) {
		int r = num1 % num2;
		num1 = num2;
		num2 = r;
	}
	return num1;
}
int main(){
	int num3, num4;
	cout << "输入自然数：";
	cin >> num3;
	cout << "输入自然数：";
	cin >> num4;
	int result1 = yue(num3, num4);
	cout << "这两个数的最大公约数为：" << result1 << endl;
	int result2 = (num3 * num4) / result1;
	cout << "这两个数的最小公倍数为：" << result2 << endl;

	return 0;
}