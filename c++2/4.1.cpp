#include<iostream>
using namespace std;
int main() {
	int *numbers = new int[10];
	int number;
	int count = 0;
	cout << "������10����:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> number;
		bool exists = false;
		for (int j = 0; j < count; j++) {
			if (numbers[j] == number) {
				exists = true;
				break;
			}
		}
		if (!exists) {
			numbers[count] = number;
			count++;
		}
	}
	cout << "����Ĳ�ͬ����" << endl;
	for (int i = 0; i < count; i++) {
		cout << numbers[i] << "  ";
	}
	cout << endl;
	delete[]numbers;
	return 0;
}