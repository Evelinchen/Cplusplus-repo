/*==============================Program Description====================================
��������:����༰��������Ĺ��캯��.cpp
����Ŀ��:ʹ��������ų��������׳��ֵĲ���Ҫ�Ĵ���Ҳ����׸��
         //����Derived�����dʱ��ͨ��Derived��Ĺ��캯����ʼ���б�����ֱ�ӵ��������
         ���캯��Base0���Դ�Base0�̳еĳ�Աvar0�����˳�ʼ�������һ�������ֱ�ӻ���Base1
         ��Base2����Base1��Base2�ĳ�ʼ���б���Ҳ���ж�Base0�ĳ�ʼ�����������Ƕ�var0
         ��ʼ����3�Σ���������
Written By Dong-Hong-Yan(2012-5-15)
=======================================================================================*/

#include<iostream>
using namespace std;

//������Base0
class Base0  {
    public:
        Base0( int var ): var0( var )  {}
        int var;
        void fun() { cout << "Member Of Base0 " << endl; }
};

//������Base1
class Base1 : virtual public Base0 {           //Base0Ϊ����࣬����Base1
    public:                          //�����ⲿ�ӿ�
        Base1( int var ): Base0( var )  {}
        int var1;
};

//������Base2
class Base2 :  virtual public Base0 {          //Base0Ϊ����࣬����Base2
    public:                          //�����ⲿ�ӿ�
        Base2( int var ): Base0( var )  {}
        int var2;
};

//������Derived
class Derived : public Base1, public Base2  {
    public:                          //�����ⲿ�ӿ�


        Derived( int var ): Base0( var ), Base1( var ), Base2( var )   {}
        int var;
        void fun() { cout << "Member Of Derived " << endl; }
};

//��������
int main()  {
    Derived d(1);                        //����Derived�����d
    d.var = 2;
    d.fun();

    return 0;
}

/*���ĵá�������һ����Ķ����һ��˳����
1�����������ֱ�ӻ��ӵ�����࣬����ִ�������Ĺ��캯����
2������������������࣬���������ڼ̳������б��еĴ��򣬷ֱ�ִ�����ǵĹ��캯����
   ���ڹ�������У�����ִ�����ǵ�����๹�캯����
3���ڸ��ƹ��캯���
   ������Թ��������������������Ķ���ȥ��ʼ����������ã���Ϊ������
   ���β��ǻ��������ʱ��ʵ�ο�����������Ķ���


���� using ����һ�������ǽ�һ����������������뵽��һ���������У�
      class Derived2 :public Base1{
       public:
        using Base0::var;
        using Base0::fun();}
*/
