#include<iostream>
using namespace std;

//Point��Ķ���
//���к����У���һ�����ڶ������������غ�����������ͬ
class Point {
	//�ⲿ�ӿ�
public:     
	//���캯��
	Point (int xx=0,int yy=0)  {                            
		x=xx;
		y=yy;
	}
	//���ƹ��캯��������
	Point (Point &p);
	int getX()  {
		return x;
	}
	int getY()  {
		return y;
	}
	//˽������
private:
	int x,y;
};

//��Ա������ʵ��
Point::Point (Point &p)  {
	x=p.x;
	y=p.y;
	cout<<"Calling the copy constructor"<<endl;
}

//�β�Ϊpoint�����ĺ���
//������ֺ���ʵ�δ����βΣ�Point p=b;��Point p(b);���ٴε���copy����
void fun1(Point p)  {
	cout<<p.getX()<<endl;
}

//����ֵΪpoint�����ĺ���
Point fun2()  {
	Point a(1,2);//�������Ա�У���һ�����к���
	return a;
}

//������
int main()  {
	//��һ������a
	Point a(4,5);
	//���1����a��ʼ��b����һ�ε��ø��ƹ��캯����Ҳ����Point b(a);
	Point b=a;                                                         
	cout<<b.getX()<<endl;                                            
	//���2������b��Ϊfun1��ʵ�Σ��ڶ��ε��ø��ƹ��캯��
	fun1(b);
	//���3�������ķ���ֵ������󣬺�������ʱ�����ø��ƹ��캯��
	b=fun2();
	cout<<b.getX()<<endl;
	return 0;
}


//�������У���һ.�ڶ���������ڲ�����ͬ���ֱ���ò�ͬ������
// Ҳ����������⣬�ȶ���point=b���޲�����Ĭ��Ϊ0����ԭ�㣩���ʵ��õ�һ��������Ȼ��a��ֵb���õڶ������� 