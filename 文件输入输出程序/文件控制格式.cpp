#include<iostream>
#include<iomanip>             //�ļ���������ʽ�����ļ�

using namespace std;
//����������
int main() {
    int a = 123;
    char *pt = "China";
    double pi = 3.14286798;

    cout << "dec:" << dec << a << endl;        //��ʽ���ƣ�ֻ���Ҳ�������Ч
    cout << "hex:" << hex << a << endl;
    cout << "oct:" << oct << a << endl;

    cout << setw(10) << pt << endl;
    cout << setfill('#') << setw(10) << pt << endl;   //����ַ�

    cout << "pi = " << pi << endl;
    cout << "pi = " << setprecision(7) << pi << endl;
    cout << "pi = " << setprecision(3) <<pi << endl;

    return 0;
}

//�籾����3.14286798,����setprecision��7��{�ú�������������ʵ������}����3.142868������С���㣩
//һ�㲻д��ʽ�Ļ���Ĭ����setprecision��6��
//��setw(n)�������ʱ��n������ڣ�������Ч����+С���㣩��Ȼ���󲹿ո�
