#include <iostream>
#include"student.h"  //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strncpy_s(name,nm,20) ;
    sex = s;
}