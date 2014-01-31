//����7-11

#include<iostream>
using namespace std;

//�������BaseClass
class BaseClass  {
    public:
        BaseClass( int a = 3, int b = 1 )  {  //���๹�캯��
            this->a = a;
            this->b = b;
        }
        void fn1()  {cout << "result is :" << a + b << endl;}
        void fn2()  {cout << "result is :" << a - b << endl;}
    protected:
        int a, b;   //�����Ա
};

//����������DerivedClass
class DerivedClass : public BaseClass  {
    public:
        DerivedClass( int c = 1 )  {   //�����๹�캯��
            this->c = c;
        }
        void fn1()  {cout << "result is :" << a + b + c << endl;}
        void fn2()  {cout << "result is :" << a - b - c << endl;}
    protected:
        int c;      //������Ա
};

//������
int main()  {
    DerivedClass obj;      //�������������
    BaseClass * p1;        //�������ָ��
    p1 = new BaseClass;    //��̬�����ڴ�

    DerivedClass * p2;     //����������ָ��
    p2 = new DerivedClass; //��̬�����ڴ�

    obj.fn1();           //�����������ó�Ա����
    obj.fn2();

    p1->fn1();           //����ָ����ó�Ա����
    p1->fn2();

    p2->fn1();           //������ָ����ó�Ա����
    p2->fn2();

    return 0;
}
//�������Ĺ��캯����ʼ��������Ա�����������в����ڳ�ʼ�������û�еĻ���
//�����ഫ���ξ��У�
