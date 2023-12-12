#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int a = 2; a < num; a++) {
		if (num % a == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int sum = 0;
	int t = 0;
	for (int a = 2;; a++) {
		if (is_prime(a)) {
			cout << a << "\t";
			sum++;
			t++;
			if (t % 10 == 0)
			{
				cout << "\n";
			}
		}
		if (sum >= 200) {
			break;
		}
	}
	
	return 0;

}