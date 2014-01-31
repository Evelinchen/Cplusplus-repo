/*=========================Program Description=============================
�������ƣ�ʹ��thisָ�뽻������ʵ��.cpp
����Ŀ�ģ�ʹ��thisָ�뽻������ʵ��
Written By Dong-Hong-Yan(2012-5-12)
===========================================================================*/

#include<iostream>
using namespace std;

class ThisSwap  {
    public:
        ThisSwap();
        void read();
        void swap();
    private:
        float * a, * b;
};
//���캯��������˽�г�Ա��ָ��ĳ�ʼ��������������
ThisSwap::ThisSwap()  {
    a = new float;
    b = new float;
    * this->a = 0;
    * this->b = 0;
}

void ThisSwap::read()  {
    cout << "Enter two real data: ";
    cin >> *a >> *b;
}

void ThisSwap::swap()  {
    float temp;
    cout << endl << "Before swap : a = " << * a << " b = " << * b << endl;
    temp = * b;
    * b = * a;
    * a = temp;
    cout << "After swap : a = " << * a << " b = " << * b << endl << endl;
}

//��������
int main()  {
    ThisSwap * p;        //����һ����ָ��
    p = new ThisSwap();   //��̬���������

    p->read();           //ͨ��ָ��������Ա����
    p->swap();

    delete p;              //ɾ����̬����������ڴ�

    return 0;
}
