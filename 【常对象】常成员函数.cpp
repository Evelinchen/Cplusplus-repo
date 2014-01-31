/*====================================================Program Description===============================================
�������ƣ�����Ա����.cpp
����Ŀ�ģ�ͨ��ʵ���˽ⳣ��Ա�������÷�         
       ���ⶨ��-����-��ʽ����  <����> const<������> ��const <����> <������>
       ���ڽ���������ʽ  ����˵����  �������������� const 
Written  By Dong-Hong-Yan(2012-4-14)
========================================================================================================================*/

#include<iostream>
using namespace std;

//��R�ࡿ 
class R  {
      public:
             R(int r1, int r2) :r1(r1), r2(r2)  {}
             void print();
             void print() const;                //���ڽ���������ʽ  ����˵����  �������������� const 
      private:
              int r1, r2;
     };    //�ֺŲ����� 

void R::print()  {
     cout<<r1<<":"<<r2<<endl;
     } 
     
//���ⶨ�峣��Ա���� 
void R::print() const {
     cout<<r1<<":"<<r2<<endl;
     }
     
//��������     
int main()  {
    R a(4, 5);
    a.print();                 //����void print() 
    R const b(20, 52);                    //���ⶨ��-����-��ʽ����  <����> const<������> ��const <����> <������>
    b.print();               //����void print() const 
    system("pause");
    return 0; 
    }
