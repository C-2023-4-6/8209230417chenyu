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
	cout << "������Ȼ����";
	cin >> num3;
	cout << "������Ȼ����";
	cin >> num4;
	int result1 = yue(num3, num4);
	cout << "�������������Լ��Ϊ��" << result1 << endl;
	int result2 = (num3 * num4) / result1;
	cout << "������������С������Ϊ��" << result2 << endl;

	return 0;
}