#include<iostream>
#include<iomanip>
using namespace std;
void sort(double arr[10]) {
	bool changed = true;
	do {
		changed = false;
		for(int j=0;j<10-1;j++)
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() {
	double arr[10] = { 1.2,2.2,3.1,5.2,1.8,3.14,5.21,7.7,9.8,10.13 };
	cout << "排序前的数字是" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	sort(arr); 
	cout << "排序后的数字是" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i]<<" ";
	}
	cout << endl;
	return 0;
}
