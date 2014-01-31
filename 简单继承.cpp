/*=======================================================Program Description===================================================
�������ƣ��򵥼̳�ʾ��.cpp
����Ŀ�ģ���һ�̳еĹ��캯��
Written By Dong-hong-Yan(2012-4-15)
===============================================================================================================================*/

#include<iostream>
using namespace std;

//��B�ࡿ
class B  {
      public:
             B()   {
                  b = 0;
                  cout<<"B's default constructor called! "<<endl;
                   }
             B(int i) {
                  b = i;
                  cout<<"B's constructor called! "<<endl;
                   }
             ~B()  {
                   cout<<"B's destructor called! "<<endl;
                   }
             void Print()  {
             cout<<b<<endl;
             }
      private:
              int b;
      };      //�ֺűز�����

//��C�ࡿ ����B����й��м̳�
class C :public B  {
      public:
             C()  {
                 c = 0;
                 cout<<"C's default constructor called! "<<endl;
                 }
             C(int i, int j);
             ~C()  {
                  cout<<" C's destructor called! "<<endl;
                  }
             void Print();
      private:
              int c;
      };         //�ֺűز�����

//C�Ĵ������Ĺ��캯��
C::C(int i, int j):B(i)  {              //���ﴫ���βΣ���B�������ã�ֻ�Ǵ��ݻ����β�
    c = j;
    cout<<"C's constructor called! "<<endl;
    }

//������C��print����
void C::Print()  {
     B::Print();
     cout<<c<<endl;
     }

//��������
int main()  {
    C obj(6, 9);
    obj.Print();

    system("pause");
    return 0;
    }

/*���ĵá���
================================================================�̳з�ʽ=========================================================================================
                 ����           ����              Private�̳з�ʽ                              proteced�̳з�ʽ                        Public�̳з�ʽ
                 �ڲ�����       ����       �������ڲ�����       ���������          �������ڲ�����        ���������         �������ڲ�����          ���������

����public       �ɷ���        �ɷ���           �ɷ���           ���ɷ���               �ɷ���              ���ɷ���             �ɷ���                �ɷ���
��Ա                                         ת��Ϊprivate                           ת��Ϊprotected                           ����protected

����protected    �ɷ���        ���ɷ���         �ɷ���           ���ɷ���               �ɷ���              ���ɷ���             �ɷ���                ���ɷ���
��Ա                                         ת��Ϊprivate                           ת��Ϊprotected                           ����protected

����private      �ɷ���        ���ɷ���        ���ɷ���          ���ɷ���               ���ɷ���            ���ɷ���             ���ɷ���              ���ɷ���
��Ա

==================================================================================================================================================================*/


