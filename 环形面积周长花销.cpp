/*====================Program  Description========= 
�������ƣ���������ܳ�����.cpp
����Ŀ�ģ����ε�����ܳ��������� 
����Ҫ��ͨ�������࣬������� 
Written By Dong-Hong yan��WANT Studio��
=================================================*/

#include<iostream>
using namespace std;

//�����const�൱�ں궨��#define
//�����е�ֵ
const double PI=3.1415926;
//դ���ĵ���
const float FENCE_PRICE=35;
//����ˮ��ĵ���
const float CONCRETE_PRICE=20;

//����������circle�������ݺͷ���
class Circle  {
	//�ⲿ�ӿ�
public:
	//���캯�����βο��Բ�ͬ��˽�г�Ա����������һһ��Ӧ
	Circle(float r);
	//����Բ���ܳ�
	float circumference();
	//����Բ�����
	float area();
	//˽�����ݳ�Ա
private:
	//Բ�뾶
	float radius;
};

//���ʵ�֣����캯����ʼ�����ݳ�Աradius
Circle::Circle(float r)  {
	radius=r;
}
//����Բ���ܳ�
float Circle::circumference()  {
	return 2*PI*radius;
}
//����Բ�����
float Circle::area()  {
	return PI*radius*radius;
}

//������
int main()  {
	float radius;
	//��ʾ�û�����뾶
	cout<<"Enter the radius of the pool:";
	cin>>radius;

	//��Ӿ�ر߽�Ķ���
	Circle pool(radius);
	//դ������
	Circle poolRim(radius+3);

	//����դ����۲����
	float fenceCost=poolRim.circumference()*FENCE_PRICE;
	cout<<"Fencing Cost is $"<<fenceCost<<endl;
	
	//���������۲����
	float concreteCost=(poolRim.area()-pool.area())*CONCRETE_PRICE;
	cout<<"Concrete Cost is $"<<concreteCost<<endl;


	return 0;
}
/*���ĵá�����������У���ʼ����Ķ�����3�ַ��������βε��������
   1���ڹ��캯���У�ֻ�����βΣ���û�и��βθ�ֵ���������������н��������ʼ��������һ���࣬�����Ǽ�������İ뾶��
   2����1Ψһ��ͬ���ǣ�ֱ�����������У���д����Ҫ������β�ֵ����Circle pool(5);
   3�������ּ��ǣ������ж���һ��input()���������������е������뺯��*/
