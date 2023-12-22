#include<iostream>
using namespace std;
class Student {
public:
	int id;
	double score;

	Student() :id(0), score(0) {}
	Student(int i, double s) :id(i), score(s) {
	};
};
int Max(Student* students, int size) {
	int maxid = -1;
	double maxscore = students[0].score;
	for (int i = 1; i < size; i++) {
		if (students[i].score > maxscore) {
			maxscore = students[i].score;
			maxid = students[i].id;
		}
	}
	return maxid;
}
int main() {
	Student students[5];
	int id; double score;
	cout << "请输入5个学生的学号和成绩，格式为：学号 成绩：\n";
	for (int i = 0; i < 5; i++) {


		cin >> id >> score;

		students[i] = Student(id, score);
	}
	cout << "最高成绩的学生学号是：" << Max(students, 5) << endl;
	return 0;
}