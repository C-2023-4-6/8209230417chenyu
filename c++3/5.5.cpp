#include<iostream>
using namespace std;
class Point
{
private:
	int x, y;
public:
	Point(int a, int b) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j) {
		cout << "�ֱ����������ı�x��y������" << endl;
		cin >> i >> j;
		x+=i;
		y+=j;
	}
	void display() {
		cout << "�޸ĺ������ֵΪ��(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);
	p.display();
	p.setPoint(0,0);
	p.display();
	return 0;
}