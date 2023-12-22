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
		cout << "分别输入两个改变x和y的数：" << endl;
		cin >> i >> j;
		x+=i;
		y+=j;
	}
	void display() {
		cout << "修改后的坐标值为：(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p(60, 80);
	p.display();
	p.setPoint(0,0);
	p.display();
	return 0;
}