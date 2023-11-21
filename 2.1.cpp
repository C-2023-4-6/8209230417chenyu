#include<iostream>
using namespace std;
int main() {
	char letter;
	cout << "ÊäÈëÒ»¸ö×ÖÄ¸£º" << endl;
	cin >> letter;
	if (letter >= 'a' && letter <= 'z') {
		letter = letter - 'a' + 'A';

}
	else if (letter >= 'A' && letter <= 'Z') {
		letter = letter - 'A' + 'a';
	}
	else {
		cout << (letter + 1) % 256 << endl;
	}
	cout << letter << endl;
	return 0;
}