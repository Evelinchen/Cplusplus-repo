/*--------------Program  Description-----------
�������ƣ����캯��.cpp
����Ŀ�ģ��������Ա�Լ����캯�� 
Written By Dong-Hong yan��WANT Studio��
=================================================*/

#include<iostream>
using namespace std;

//Clock�Ķ���
class Clock  {
	//�ⲿ�ӿ�
public:
	//���캯����Ĳ����ǡ�˽�����ݡ������Ǻ���������
	//���û�й��캯��������ͨ����������
	Clock (int newH,int newM,int newS);
	void setTime(int newH,int newM,int newS);
	void showTime();
	//˽������
private:
	int hour,minute,second;
};
//���캯����ʵ��
Clock::Clock(int newH,int newM,int newS)  {
	hour=newH;
	minute=newM;
	second=newS;
}
//��Ա������ʵ�֣����ͺ���ǰ�����������
void Clock::setTime(int newH,int newM,int newS)  {
	hour=newH;
	minute=newM;
	second=newS;
}
//����Ϊ��������
inline void Clock::showTime()  {
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

//������
int main()  {
	//���������в����������Ĭ��ֵ�Ļ���Ҳд��Clok c;
	Clock c(0,0,0);
	c.showTime();
	c.setTime(8,30,30);
	c.showTime();
	return 0;
}
