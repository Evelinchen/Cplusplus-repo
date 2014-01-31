/*===========================Program Description=================================
�������ƣ���Բ��.cpp
����Ŀ�ģ�����һ����Բ�࣬��ָ����Ϊ�뾶�����ж�̬����
Written By Dong-Hong-Yan(2012-4-24)
=================================================================================*/

#include<iostream>
#include<string>
using namespace std;

const float PI = 3.14159f;         //����PIΪ�����ȳ�������

//�����Բ��
class SimpleCirCle  {
	public:
		SimpleCirCle()  {
			itsRadius = new int (0);    //��ָ�붯̬���벢��ʼ��Ϊ0
		}
		~SimpleCirCle()  {              //��������������ɾ��ָ�������ڴ�
			delete itsRadius;
			cout << "deleting ..." << endl;
		}

		void input();
		double itsArea();
        void display( string s );

	private:
		int * itsRadius;
};

void SimpleCirCle::input()  {
	cout << "Please enter the radius :";
	cin >> *itsRadius;           //����ʱ���������ָ��ȫ��
}

double SimpleCirCle::itsArea()  {
	return PI * (* itsRadius) * (* itsRadius);
}

//������ʾ�������õ�string�ַ������ʲ�����string ����
void SimpleCirCle::display( string s )  {
	cout << s <<" = " << *itsRadius << endl;  //���ʱ���Ӳ����Ǻţ�����ν
}

//��������
int main() {

    SimpleCirCle a;    //�����޲ι��캯������ʼ������
	a.input();
	a.display( "itsRadius" );         //������ʾ��������������Ϣ
	cout << a.itsArea() << endl;

	return 0;
}
