#include <iostream>
using namespace std;
int kaifang(float a, float k) {
    float i;
    i = 0.5 * (k + a / k);
    if (i - k<1e-5 && i - k>-1e-5)
    {
        cout << "����ƽ����Ϊ" << i << endl;
    }
    else {
        kaifang(a, i);
    }
    return i;
}

int main()
{
    float  a;
    cout << "����������" << endl;
    cin >> a;
    if (a < 0) { cout << "������û��ƽ����" << endl; }
    if (a == 0) { cout << "������ ƽ����Ϊ0��" << endl; }
    kaifang(a, a);

    return 0;
}
