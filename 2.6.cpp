#include<iostream>
using namespace std;
int gcd(int a, int b){
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}//�����Լ��
int main()
{
	int a = 0;
	int b = 0;
	cout << "��������������" << endl;
	cin >> a;
	cin >> b;
	int g = gcd(a, b);
	cout << "���������������Լ��Ϊ" << g << endl;
	int l = a * b / g;//��С�����������������ĳ˻��������ǵ����Լ��
	cout << "��������������С������Ϊ" << l << endl;
	
	return 0;
	
}