#include<iostream>
using namespace std;

//Clock�Ķ���
class Clock  {
	//�ⲿ�ӿڣ���ߵĺ����൱�ڶ�������
public:
	//���캯��
	Clock (int newH,int newM,int newS);
	//������һ���޲εĹ��캯��
	Clock ()  {
		hour=1;
	    minute=2;
	    second=3;
	}
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
	//��Ϊ֮ǰ������һ���޲εĹ��캯�������ﲻ��Ҫ����
	Clock c1;
	c1.showTime();
	c.showTime();
	c.setTime(8,30,30);
	c.showTime();
	return 0;
}
