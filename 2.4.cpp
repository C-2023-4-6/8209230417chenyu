#include<iostream>
using namespace std;
int main() {
	char c1;
	double num1, num2 ,res;
	bool t = true;
	cout << "�����һ�����֣�"<<endl;
	cin >> num1;
	cout << "�����������"<<endl;
	cin >> c1;
	cout << "����ڶ������֣�"<<endl;
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
			cout << "��������Ϊ��";
			t = false;
		}
		else res = num1 / num2;
		break;
	case'%':
		if (num2 == 0) {
			cout << "��������Ϊ��";
			t = false;
		}
		else res = static_cast<int>(num1) % static_cast<int>(num2);
		break;
	default:
		cout << "��Ч�������" << endl;
		t = false;
	}
	if (t) {
		cout << "������Ϊ" << res << endl;
	}
	return 0;
}