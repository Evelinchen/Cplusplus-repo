/*-------------Program Description------------
�������ƣ�is_Parld.cpp
����Ŀ�ģ��ж�һ������ƽ���Լ������Ƿ����
Written By Dong-Hong Yan(WANT Studio)
----------------------------------------------*/


#include<iostream>
using namespace std;

//�ж�n�Ƿ������������ֵΪbool��
bool is_Pald(unsigned int n) {
 
	//�����޷��ű���n
	unsigned i=n; 
	unsigned m=0;

	while(i>0)  {
	
		m=m*10+i%10;      //�˷����ܲ���ͨ����ÿλ���ݣ���������ԭ����Ƚ�
		i/=10;
	}
    return m==n; //�˾�ܲ���ͨ��m==n�����жϣ��Ӷ�����true��false
}

//������
int main()  {
	for(unsigned m=11;m<1000;m++)  {

		//���ַ����ܺã��ж�һ��������һ������
		if(is_Pald(m)&&is_Pald(m*m)&&is_Pald(m*m*m))  {
			cout<<"m="<<m;
			cout<<"   m*m="<<m*m;
			cout<<"   m*m*m="<<m*m*m<<endl;
		}
	}
	return 0;
}
