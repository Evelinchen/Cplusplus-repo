/*--------------Program  Description-----------
�������ƣ���һ��������������.cpp
����Ŀ�ģ���һ�������������� 
Written By Dong-Hong yan��WANT Studio��
=================================================*/

#include<iostream>
//��c++��һ�㲻��<stdlib.h>�����ļ�ǰ��c
#include<cstdlib>
//ǰ��������c++�Ĺؼ��ʣ�std�ǣ��磨string class,
//�Լ�cout,cin������iostream����󣩶�����װ�������ռ�std��
using namespace std;

int main()
{
	int n;

	cout<<"Enter a positive integer:";
	cin>>n;
	//�����Ҫ����Ļ����ʾ�ļ�˫���ţ�

	cout<<"Number  "<<n<<" factors";
	for(int k=1;k<=n;k++)
		if(n%k==0)
			cout<<k<<" ";
	cout<<endl;
   
		return 0;
	    
}
