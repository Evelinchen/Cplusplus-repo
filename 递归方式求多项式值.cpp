/*========Program Description=========
�������ƣ�Legendre.cpp
����Ŀ�ģ����õݹ�ķ�ʽ�����ʽ��ֵ
Written By Dong-Hong Yan
======================================*/

#include<iostream>
using namespace std;

//�������õ¶���ʽ����������double����
double Legendre( int n,double x)  {
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else 
	//�м���2*n������������ 
		return ((2*n-1)*x*(Legendre( n-1, x))-(n-1)*Legendre( n-2, x))/n;

}

//������
int main()  {

	//�������n���Ա���x
	int num;
	double x;
	cout<<"Please enter num and x:";
	cin>>num>>x;
	cout<<"The result of Legendre is :"<<Legendre( num, x)<<endl;
	return 0;
}
