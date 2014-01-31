#include<iostream>
#include<iomanip>             //�ļ���������ʽ�����ļ�

using namespace std;
//����������
int main() {
    int a = 21;
    char *pt = "China";
    double pi = 3.12345678;
    cout.setf(ios::dec);
    cout << "dec:" << dec << a << endl;        //��ʽ���ƣ�ֻ���Ҳ�������Ч
    cout.unsetf(ios::dec);

    cout.setf(ios::hex);
    cout << "hex:" << hex << a << endl;          //Ĭ�϶���ķ�ʽ��Ϊ�Ҷ���
    cout.unsetf(ios::hex);

    cout.setf(ios::oct);
    cout << "oct:" << oct << a << endl;
    cout.unsetf(ios::oct);

    cout.width(10);
    cout << pt << endl;
    cout.width(10);
    cout.fill('#');
    cout << pt << endl;   //����ַ�

    cout.setf(ios::scientific);
    cout << "pi = " << pi << endl;
    cout.unsetf(ios::scientific);

    return 0;
}

//�籾����3.14286798,����setprecision��7��{�ú�������������ʵ������}����3.142868������С���㣩
//һ�㲻д��ʽ�Ļ���Ĭ����setprecision��6��

/*
����Ա����                     ��ͬ���õĿ��Ʒ�                  ����
precision(n)                   setprecision(n)         ����ʵ���ľ���Ϊn
width(n)                       setw(n)                 �����ֶο��
fill(c)                        setfill(c)              ��������ַ�
setf()                         setiosflags()           �������״̬
unsetf()                       unsetiosflags()         ��ֹ�����õ����״̬
*/
