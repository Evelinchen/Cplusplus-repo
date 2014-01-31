/*===============================Program Description====================================
�������ƣ�������.cpp
����Ŀ�ģ�
Written By Dong-Hong-Yan(2012-5-16)
========================================================================================*/

#include<iostream>
#include<cmath>           //������ѧ�ļ�

using namespace std;

//���������figure
class figure  {
    public:
        virtual void draw( void ) = 0;      //�������麯��draw()
        virtual void area( void ) = 0;      //�������麯��draw()
};

class circle :public figure {       //�ӻ���figure����circle��
    public:
        float r;
    public:
            circle( float radius ):r( radius )  {}   //����circle�๹�캯��
            void draw( void );               //���������еĴ��麯��draw()
            void area( void );               //���������еĴ��麯��area()
};

void circle::draw( void )  {
    cout << "����һ��Բ��"  << endl;
}

void circle::area( void )  {
    cout << "�뾶��10��Բ����ǣ�" << 3.14 * r * r << endl;
}

class triangle : public figure  {      //�ӻ���figure����triangle�࣬ triangle�����ǳ�����
    public:
        float a;
        float b;
        float c;
        triangle( float f1, float f2, float f3 )  {
            a = f1;
            b = f2;
            c = f3;
        }
        void draw( void );
        void area( void );
};

void triangle::draw( void )  {
    cout << "����һ�������Σ�" << endl;
}

void triangle::area( void )  {      //���ú��׹�ʽ�����
    float s;
    s = ( a + b + c ) / 2;
    cout << "�߳�Ϊ��3,4,5��������������ǣ� "  << sqrt( s*(s-a)*(s-b)*(s-c) ) << endl;
}

int main()  {
    circle c1(10);
    triangle t1 (3, 4, 5);
    c1.draw();
    c1.area();
    t1.draw();
    t1.area();

    return 0;
}
