
/*==============================Program Description==================================
�������ƣ���ǰ���º�������ͼ��������.cpp
����Ŀ�ģ��������������ǰ׺��Ӧ�ã������������޲ε����㺯����������������صĺ�׺
          Ӧ�ã����������õ��Ǵ�int���������������
Written by Dong-Hong-Yan(2012-4-28)
=====================================================================================*/

#include<iostream>
#include<string>         //����ͷ�ļ�
using namespace std;

//����һ����MyNum
class MyNum   {
    public:
        MyNum();
        MyNum( int iNumber );
        MyNum operator++();
        MyNum operator++( int );
        void display( string );
    private:                           //˽������
        int iNumber;
};

MyNum::MyNum() :iNumber( 0 ) {}

MyNum::MyNum( int iNumber )  {
    this->iNumber = iNumber;
}

//����ǰ׺�������������
MyNum MyNum::operator++()  {
    MyNum Temp;
    iNumber += 1;
    Temp.iNumber = iNumber;
    return Temp;
}

//�����׺�������������
MyNum MyNum::operator++( int )  {
    MyNum Temp;
    Temp.iNumber = iNumber;
    iNumber += 1;
    return Temp;
}

void MyNum::display( string s )  {
    cout << s <<" = " << iNumber << endl;
}

//����������
int main()  {
    MyNum MyN1(100);
    MyNum MyN2;

    MyN2 = ++MyN1;                      //�ȼ���MyN1.operator++()

    cout << "\n����operator++()ȡ����Ա������ " << endl;

    MyN1.display("MyN1");               //������ʾ��Ա��������
    MyN2.display("MyN2");               //������ʾ��Ա��������

    MyN2 = MyN1++;                      //�ȼ���MyN1.operator++(0)

    cout << "\n����operator++(int)ȡ����Ա������ " << endl;

    MyN1.display("MyN1");
    MyN2.display("MyN2");
    return 0;

}
