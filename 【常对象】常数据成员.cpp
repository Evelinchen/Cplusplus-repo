/*==================================================Progrram Descriptionn=====================================================
�������ƣ������ݳ�Աʾ��.cpp
����Ŀ�ģ���ϰ���������������ʹ�� 
Written By Dong-Hong-Yan(2012-4-14) 
==============================================================================================================================*/

#include<iostream>
using namespace std;

//��Locating�ࡿ 
class Location  {
      public:         //�ⲿ�ӿ� 
             Location(int k): a(k), r(a)  {             //����ʼ��const��Աʱ������ͨ��--��Ա��ʼ���б�--���� 
                            b = a;
                            }
             const int &r;                  //���峣���ó�Ա 
             void print()  {
                  cout<<"a = "<<a<<" "<<"r = "<<r<<" "<<"b = "<<b<<" "<<endl;
                  }
      private:         //˽������ 
              const int a;                   //���峣���ݳ�Ա 
              int b;
      };          //�ֺűز����� 
      
//�������� 
int main()  {
    Location m(10);
    m.print();
    system("pause");
    return 0;
    }
