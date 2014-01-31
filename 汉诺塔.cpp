/*--------------Program  Description-----------
�������ƣ�Hannt.cpp
����Ŀ�ģ���a�����ƶ�c���̣�����b�룬ÿ��һ�������ִ�����С����
Written By Dong-Hong yan��WANT Studio��
=================================================*/

#include<iostream>
//��������ռ䣬���û�ж���std�������ٺ���ǰ��std����std::cout���ɣ�������ͷ�ļ���һ��".h"
using namespace std;

//��src���������һ�������ƶ���dest����
//���庯�����������
void move(char src,char dest)
{
	cout<<src<<"-->"<<dest<<endl;
}

//��n�����Ӵ�src��A�����ƶ���dest��c���룬��medium��b������Ϊ�м�ý��,����λ�ü�ס������ȴ���� 
void hanoi(int n,char src,char medium,char dest)
{
	if(n==1)
		move(src,dest);
	else
	{
        //��n-1�����Ӵ�src��A�����ƶ���medium��b���룬��dest��c������Ϊ�м�ý��,����λ�ü�ס������ȴ���� 
		hanoi(n-1,src,dest,medium);
		move(src,dest);
		//��n�����Ӵ�medium��b�����ƶ���dest��c���룬��src��A������Ϊ�м�ý��,����λ�ü�ס������ȴ���� 
		hanoi(n-1,medium,src,dest);
	}
}


//������
int main()
{
	int m;//���е���������
	cout<<"Enter the number of diskes:";
	cin>>m;
	cout<<"the steps to moving "<<m<<" diskes:"<<endl;
	hanoi(m,'A','B','C');
	return 0;
}
