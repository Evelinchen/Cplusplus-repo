/*===================================Program Description=====================================
�������ƣ�����8-9.cpp.
����Ŀ�ģ�����������������ָ�룬
Written By Dong-Hong-Yan��2012-6-5��
===========================================================================================*/

#include<iostream>
using namespace std;

//�������
class BaseClass  {
    public:
        BaseClass(int i = 0): i(i) {}
        virtual ~BaseClass()  {cout << "BaseClass destructor!" << endl;}      //
        int i;
        void fn() {cout << "The number i is " << i << endl;}
};

//����������
class DerivedClass : public BaseClass {
    public:
        DerivedClass(int j = 10): j(j) {}
        ~DerivedClass() { cout << "DerivedClass destructor!" << endl;}
        int j;
        void fn() {cout << "The number j is " << j << endl;}
};

//[������]
int main()  {
    BaseClass * Ptr = new DerivedClass(2);      //�����ﶯ̬�����ڴ滹���ù��캯���������õ����в�����
    Ptr->fn();
    delete Ptr;    //���������룬������������
    return 0;
}
//��������������ɾ���ڴ�ʱ���ȵ��������࣬����û����
//2������Ҫ�����ô�����������=0����Ҫ�����������壬���º������ǿ�
