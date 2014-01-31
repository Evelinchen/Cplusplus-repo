/*==============================Program Description==================================
�������ƣ��򵥵�һԪ���������.cpp
����Ŀ�ģ���������У������ͨ��ʵ�õ������������Negative()�������ﵽʹ������Ա����
          ȡ����Ŀ�ģ�
Written by Dong-Hong-Yan(2012-4-28)
=====================================================================================*/

#include<iostream>
using namespace std;             //ʹ�����ֿռ�std

//����һ����Person
class Person  {
    friend void operator-(Person);  //�����������������Ϊ��Ԫ����,����ֻд�����͡�
    public:               //�ⲿ�ӿ�
        Person(int iApple);
        void Negative();
        void display();

    private:              //˽�г�Ա����
        int iApple;
};

Person::Person(int iApple)  {
    this->iApple = iApple;
}

//�����Ա����ȡ��������
void Person::Negative()  {
    iApple = -iApple;
}

void Person::display()  {
    cout << " iApple =  " << iApple << endl;
}

//����������������
void operator-(Person p1)  {
    p1.iApple = -p1.iApple;
}

//��������
int main()  {
    Person XiaoWang(5);     //��������XiaoWang,�Զ����ù��캯��

    cout << "\n����Negative()ȡ����Ա����ǰ" << endl;
    XiaoWang.display();

    XiaoWang.Negative();

    cout << "\n����Negative()ȡ����Ա������" << endl;
    XiaoWang.display();

    operator-(XiaoWang);        //�ȼ���-XiaoWang

    cout << "\n����operator()���������������" << endl;
    XiaoWang.display();

    return 0;
}

