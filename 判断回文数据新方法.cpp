#include <iostream>
using namespace std;

int main()
{
    int num1=0;
    int num2=0;
    int Temp;

    int i;         // ȡ��Ԫ�صĸ���λֵ

    cout << "������һ��������";
    cin >> num1;

    Temp = num1;

    cout << "���������������ֵΪ:";
    while(num1>0)
    {
        i = num1 % 10;
        num1 /= 10;
        num2 = num2*10 +i;
    }
    cout << num2 << endl;

    if (Temp == num2)
    {
        cout << "�����ǻ�������\n";
    }
    else
    {
        cout << "�������ǻ�������\n";
    }
    return 0;
}
