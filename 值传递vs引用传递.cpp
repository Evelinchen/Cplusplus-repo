/*-------------Program Description------------
�������ƣ�val_Pass.cpp
����Ŀ�ģ�ֵ���������ô��ݵıȽ�
Written By Dong-Hong Yan(WANT Studio)
----------------------------------------------*/

#include<iostream>
//��Ϊ�õ�setw()�������ô�ͷ�ļ�
#include<iomanip>
using namespace std;

//���庯����ֵ���ݣ�in1�������ô��ݣ�in2��
void fiddle(int in1,int &in2)  {
	in1=in1+100;
	in2=in2+100;
	cout<<"The values are: ";
	cout<<setw(5)<<in1;
	cout<<setw(5)<<in2<<endl;
}

int main()  {
	int v1=7,v2=12;
	cout<<"The values are ";
	cout<<setw(5)<<v1;
	cout<<setw(5)<<v2<<endl;
	fiddle(v1,v2);            //��������Ч���ǣ��е�ַ�ı���ֵ��ȫ����
	cout<<"The values are ";

	//����setw������ʹ�ø�ʽ
	cout<<setw(5)<<v1;
	cout<<setw(5)<<v2<<endl;
	return 0;

}
