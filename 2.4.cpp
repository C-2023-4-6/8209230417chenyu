#include<iostream>
using namespace std;
int main() {
	char c1;
	double num1, num2 ,res;
	bool t = true;
	cout << "输入第一个数字："<<endl;
	cin >> num1;
	cout << "输入运算符："<<endl;
	cin >> c1;
	cout << "输入第二个数字："<<endl;
	cin >> num2;
	switch (c1) {
	case'+':
		res = num1 + num2;
		break;
	case'-':
		res = num1 - num2;
		break;
	case'*':
		res = num1 * num2;
		break;
	case'/':
		if (num2 == 0) {
			cout << "除数不能为零";
			t = false;
		}
		else res = num1 / num2;
		break;
	case'%':
		if (num2 == 0) {
			cout << "除数不能为零";
			t = false;
		}
		else res = static_cast<int>(num1) % static_cast<int>(num2);
		break;
	default:
		cout << "无效的运算符" << endl;
		t = false;
	}
	if (t) {
		cout << "计算结果为" << res << endl;
	}
	return 0;
}