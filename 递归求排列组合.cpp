/*-------------Program Description------------
�������ƣ�rec_Permut.cpp
����Ŀ�ģ��õݹ鷽����������ϣ��ù�ʽ
Cn m=Cn-1 m+Cn-1 m-1
Written By Dong-Hong Yan(WANT Studio)
----------------------------------------------*/


#include<iostream>
using namespace std;

//�����n������ѡk���˵���������ݹ����
int comm(int n,int k)  {
	if(k>n)
		return 0;
	else if(n==k||k==0)
		return 1;
	else
		return comm(n-1,k)+comm(n-1,k-1);

}

int main() {
	int n,k;
	cout<<"Please enter two integers n and k:";
	cin>>n>>k;
	cout<<"C(n,k)="<<comm(n,k)<<endl;
	return 0;
}

