#include<iostream>
using namespace std;
class Count {
public:void input();
	  void output();
	  void volume();
private:double length;
	   double width;
	   double height;
	   double v;
};
void Count::input() {
	cout << "�ֱ����볤���εĳ����" << endl;
	cin >> length >> width >> height;
}
void Count::volume() {
	v = length * width * height;
}
void Count::output() {
	cout << "�����ε����v=" << v;		
}
int main() {
	Count cfx;
	cfx.input();
	cfx.volume();
	cfx.output();
	return 0;

}