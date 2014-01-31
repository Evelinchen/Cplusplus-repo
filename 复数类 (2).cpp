/*==========================================Program Description======================================
��������:������.cpp
����Ҫ���ø���3+5i��ʼ��c1����ʵ��4.5��ʼ��c2����c1��c2��ӣ����������c1�У���c1�������ʱ�Ľ��Ӧ
����7.5+5i��
Written By Dong-Hong-Yan (2012-4-8)
=====================================================================================================*/

#include<iostream>
using namespace std;

//����Complex��
class Complex {
	public:     //�ⲿ�ӿ�
		Complex(float num1 = 0, float num2 = 0):num1(num1), num2(num2)  {}
		Complex(Complex &p);
		void add(Complex pp);
		void show();
		float GetNum1()  {return num1;}
		float GetNum2()  {return num2;}
		~Complex()  {}
	private:   //˽������
		float num1;           //������ʵ���� 
		float num2;			//������������
};

//���帴�ƹ��캯��
Complex::Complex(Complex &p): num1(p.num1), num2(p.num2) {
	cout<<"Calling the copy constructor!"<<endl;
}

//���帴����Ӻ���,������������ǰĬ�ϵ����ֵ��ӣ������� 
void Complex::add(Complex pp)  {
	num1+=pp.GetNum1();
	num2+=pp.GetNum2();
}

//������������������ǰ����ĳ�Ա 
void Complex::show()  {
	cout<<num1<<"+"<<num2<<"i"<<endl;
}
//������
int main()  {
	Complex c1(3,5);
	Complex c2=4.5;
	c1.add(c2);
	c1.show();
	system("pause");
	return 0;
}
