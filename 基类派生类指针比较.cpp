/*===================================Program Description=====================================
�������ƣ�����8-8.cpp.
����Ŀ�ģ��麯��������ָ�룬�Լ�������ָ��
Written By Dong-Hong-Yan��2012-6-5��
===========================================================================================*/

#include<iostream>
using namespace std;

//�������
class BaseClass  {
    public:
        BaseClass(int i = 0): i(i) {}
        int i;
        virtual void fn1()  { cout<< "This is BaseClass" << endl;}   //�����麯��
        void fn2() {cout << "The number i is " << i << endl;}
};

//����������
class DerivedClass : public BaseClass {
    public:
        DerivedClass(int j = 10): j(j) {}
        int j;
        void fn1()  { cout<< "This is DerivedClass" << endl;}
        void fn2() {cout << "The number j is " << j << endl;}
};

//������
int main () {
    DerivedClass obj;               //����DerivedClass����
    BaseClass *Ptr1 = &obj;         //����BaseClass����ָ��
    DerivedClass *Ptr2 = &obj;      //����DerivedClass����ָ��

    Ptr1->fn1();                 //ͨ��ָ�����BaseClasds�к���
    Ptr1->fn2();

    Ptr2->fn1();                 //ͨ��ָ�����BaseClasds�к���
    Ptr2->fn2();

    return 0;
}

/*[�ĵ�]
1���д������֪���麯���Ǹ�������
2������ָ��ֻ����ָ��������Ļ��ಿ��*/
