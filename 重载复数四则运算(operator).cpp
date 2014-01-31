/*===============================Program Description===============================
�������ƣ����ظ�������������.cpp
����Ŀ�ģ���һ�����ڸ��������� ���ظ�������������������ӡ�������ʵ�����鲿���죬��
          �Զ���һ�������࣬Ȼ�������������ظ�������������������
Written By Dong-Hong-Yan(2012-4-18)
===================================================================================*/
#include   <iostream>
using namespace std;

//���塾complex����
class   complex
{

    public:

        complex()   {   real=imag=0;   }

        complex(double   r,   double   i)

        {

                real   =   r,   imag   =   i;

        }

        complex   operator   +(const   complex   &c);

        complex   operator   -(const   complex   &c);

        complex   operator   *(const   complex   &c);

        complex   operator   /(const   complex   &c);

        friend   void   print(const   complex   &c);

private:

        double   real,   imag;

};



inline   complex   complex::operator   +(const   complex   &c)

{

        return   complex(real   +   c.real,   imag   +   c.imag);

}



inline   complex   complex::operator   -(const   complex   &c)

{

        return   complex(real   -   c.real,   imag   -   c.imag);

}



inline   complex   complex::operator   *(const   complex   &c)

{

        return   complex(real   *   c.real   -   imag   *   c.imag,   real   *   c.imag   +   imag   *   c.real);

}



inline   complex   complex::operator   /(const   complex   &c)

{

        return   complex((real   *   c.real   +   imag   +   c.imag)   /   (c.real   *   c.real   +   c.imag   *   c.imag),

                        (imag   *   c.real   -   real   *   c.imag)   /   (c.real   *   c.real   +   c.imag   *   c.imag));

}



void   print(const   complex   &c)

{

        if(c.imag <0)

                cout <<c.real<<c.imag << "i ";  //���c.imag<0�Ļ�����ôc.imag�Ѿ��и����ˣ�����Ҫ�����������

        else

                cout <<c.real << "+ " <<c.imag << "i ";

}



int   main()

{

        complex   c1(2.0,   3.0),   c2(4.0,   -2.0),   c3;

        print(c2);

        c3   =   c1   +   c2;

        cout << "\nc1+c2= ";

        print(c3);

        c3   =   c1   -   c2;

        cout << "\nc1-c2= ";

        print(c3);

        c3   =   c1   *   c2;

        cout << "\nc1*c2= ";

        print(c3);

        c3   =   c1   /   c2;

        cout << "\nc1/c2= ";

        print(c3);

        c3   =   (c1+c2)   *   (c1-c2)   *   c2/c1;

        cout << "\n(c1+c2)*(c1-c2)*c2/c1= ";

        print(c3);

        cout << endl;

        return 0;

}



     /*   �ó�������н��Ϊ��



        c1+c2=6+1i

        c1-c2=-2+5i

        c1*c2=14+8i

        c1/c2=0.45+0.8i

        (c1+c2)*(c1-c2)*c2/c1=9.61538+25.2308i




        �ڳ����У���complex������4����Ա������Ϊ��������غ���������������غ���˵��Ϊ��ĳ�Ա������ʽ���£�



        <����>   operator   <�����> ( <������> )



        ���У�operator�Ƕ�����������غ����Ĺؼ��֡�*/

//////////////////////////////////////////////////////////////////////////////////
/*
    �ٸ����ӱȽ�һ��
����һ������struct������ӵĺ���
struct   A{...};
const   A   Add(const   A  &ra, const   A   &b){...};
����������������A����󣬾Ϳ�������
A   a,b,c;
c=Add(a,b);   //�������������ˬ����ô��Ϳ�����operator,�������¿�

const   A   operator+(const   A&   ra,const   A&   rb){...};   //�������Ǹ�Add�����Ӹ�ʽ�ϱȽ�һ��
���ھͿ�������
c=a+b;
��Ȼ������ʵ��*,/,��ú�
�������operator+��Add��ʲô����������ǡ���ʽ���ÿ�������operator+���¶������ʺ�struct   A��+������
////
δ�꣬������operator������һ������
class   A{
    int   i;
public:
    A(){   i=50;}
};
�������Ҫʵ��class   A��int��ӣ�������һ��int����������
int   i=a+50;   ?????
��������д,��class   A�����һ��GetI֮��ĳ�Ա��������A::i��ֵ
class   A{
    int   i;
public:
    A(){   i=50;}
    int   GetI(){return   i;}
};

int   i=a.GetI()+50;   //�������ò�ˬ�������������ķ���
class   A{
    int   i;
public:
    A(){   i=50;}
    friend   const   int   operator+(const   A&   ra,const   int&   rb);
};
������Ϳ�����
int   i=a+50;   //���ǻ��ǲ�ˬ���������-,*,/��ֻ�ж�����ʵ��
������һ�������ݵķ�������
class   A{
    int   i;
public:
    A(){   i=50;}
    operator   int()   const{   return   int(i);}   //��A�Զ�ת��Ϊһ��int��ʱ����
};
������ˬ��
A   a;
int   i=a+50;
i=a-15;
������
���һ����ԣ����������ĺ�����void   fun(int   i);
fun(a);ͬ������
*/
