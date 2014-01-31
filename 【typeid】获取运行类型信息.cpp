/*=========================Program Description==============================
�������ƣ�typeid��ȡ����������Ϣ.cpp
����Ŀ�ģ�����typeid���÷�������������ʽ������˵����
Written By Dong-Hong-Yan(2012-5-27)
============================================================================*/

#include<iostream>
#include<typeinfo>     //����ͷ�ļ�

using namespace std;

class Base {
    public:
        virtual ~Base()  {}
};

class Derived : public Base {};

void fun( Base * b ) {

    //�õ���ʾb��*b������Ϣ�Ķ���
    const type_info &info1 = typeid( b );
    const type_info &info2 = typeid( *b );

    cout << "typeid( b ):" << info1.name() << endl;
    cout << "typeid( *b ):" << info2.name() << endl;

    if( info2 == typeid(Base) )
        cout << "A Base class!" << endl;
}

int main()  {
    Base b;
    fun(&b);
    Derived d;
    fun(&d);

    return 0;
}
/*1�������У�����* b��������Base����Base�Ƕ�̬���ͣ�������typeid��*b���õ���
��bָ����ָ�����ľ������ͣ�������ε��õõ���ͬ�����
2����Ȼb��ָ���̬���͵�ָ�룬��ָ�뱾���Ƕ�̬���ͣ��������ε��ý��һ��
3��ͨ��typeid�õ�����type_info���͵ĳ����ã���type_info������һ����Ϊname��
�����ã�*/











