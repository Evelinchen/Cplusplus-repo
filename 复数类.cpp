/*==========================================Program Description======================================
��������:������.cpp
����Ҫ���ø���3+5i��ʼ��c1����ʵ��4,5��ʼ��c2����c1��c2��ӣ����������c1�У���c1�������ʱ�Ľ��Ӧ
����7.5+5i��
Written By Dong-Hong-Yan (2012-4-8)
=====================================================================================================*/

#include<iostream>
using namespace std;

class Complex {
      public :
             Complex(float num1 = 0, float num2 = 0): num1(num1), num2(num2) {} 
             Complex (Complex &pp);
             float GetNum1();                              
             float GetNum2();
      private :
              float num1;       //���帴���������� 
              float num2;       //���帴���ĸ����� 
      };                      //�мǷֺţ���Զ������ 
       
 // ���帴�ƹ��캯�� 
Complex::Complex(Complex &pp) : num1(pp.num1), num2(pp.num2) {
                 cout<<"Calling the copy constructor !"<<endl;
                 }
                 
//��������num1����                 
float Complex::GetNum1()  {
             return num1;
             }    
             
//��������num1����             
float Complex::GetNum2()  {
             return num2;
             }
             
//���帴����Ӻ�������Complex���庯����������     
Complex add(Complex p1, Complex p2)  {
             float x = p1.GetNum1() + p2.GetNum1();           //�����ﲻ����˽�г�Ա��Ӽ������ɷ��� 
             float y = p1.GetNum2() + p2.GetNum2();
             Complex p(x, y);                                  //����p����ʼ����ֵ 
             return p;                                          //����p�����ø��ƹ��캯�� 
             }
          
//��������             
int main()  {
    Complex c1(3, 5);               //���岢��ʼ�� 
    Complex c2(4.5, 0);             //���岢��ʼ��
    c1 = add(c1, c2);               //��c1���ղ��������֮���ֵ 
    cout<<"The answer is : "<<c1.GetNum1();
    cout<<"+"<<c1.GetNum2()<<"i"<<endl;
    system("pause");
    return 0;
    } 
             
             
