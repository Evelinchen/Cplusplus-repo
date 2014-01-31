/*-------------Program Description------------
�������ƣ��ݹ����õ¶���ʽ.cpp
����Ŀ�ģ�ͨ���ݹ���n�����õ¶���ʽ��ֵ����ʽΪ
Pn(x)=��1  n=0;x  n=1;[(zn-1)x*P(n-1)(x)-(n-1)*P(n-2)(x)]/n   n>1��
Written By Dong-Hong Yan(WANT Studio)
----------------------------------------------*/

#include<iostream>
using namespace std;

//���庯��������ʽ�������㴦��m,�мǶ���Ϊdouble�͵ģ�����Ҳ��
double Legendre(int m,double x)  {

	//��m=0��ʱ
	if(m==0)
		return 1;
	else if(m==1)

		//��m=1ʱ������x
		return x;
	else

		//�������������ѭ�����ã�����2m����д��2*m������������
		return ((2*m-1)*x*Legendre(m-1,x)-(m-1)*Legendre(m-2,x))/m;

}

//������
int main()  {
	//����Ҫ����ı�����ֵ
	int Num;
	int x;

	//�������Result,�������պ�������ֵ
	int Result;
	cout<<"Please enter a number num and x:";
	cin>>Num>>x;
	//���պ�������ֵ
	Result=Legendre(Num,x);
	cout<<"The result is "<<Result<<endl;
	return 0;

}