/*===============================Program Description==================================
�������ƣ���ͬ����ı���������.cpp
����Ŀ�ģ�ͨ���̳�������Բ����Բ����Բ׶�ı���������������һ��Բ�࣬���뾶��Ա��
          ���ࡢԲ�����Բ׶����ΪԲ��������ࡣ����Բ����Բ����Բ׶�ı�����������
����Ҫ��1. Ax ��C++�п����ú���pow(A,x)����ʾ;
          2. sqrt(x)������ʾx�Ŀ����š�
          3. ���Ҫ����������������ͷ�ļ������#include <math.h>��
Written By Dong-Hong-Yan(2012-5-5)
======================================================================================*/

#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159;

//����Բ��
class Circle  {
    public:
        Circle( float radius = 0 )  {
            this->radius = radius;
            }
        ~Circle()  {}

        void input()  {
            cout << "������Բ�İ뾶" << endl;
            cin >> radius;
        }
        double Cir_Area()  {
            return PI * pow( radius, 2 );
        }
        double Cir_Volume() {
            return 0;
            }
    protected:
        float radius;
};

//��������
class Sphere : public Circle  {
    public:
        Sphere( float radius = 0 ) : Circle( radius ) {}
        ~Sphere()  {}

        void input()  {
            cout << "��������İ뾶" << endl;
            cin >> radius;
        }
        double Sph_Area()  {
                return 4 * PI * pow( radius, 2 );
        }
        double Sph_Volume()  {
                return 4.0 / 3 * PI * pow( radius, 3 );
        }
};

//����Բ����
class Cylinder : public Circle {
    public:
        Cylinder( float radius = 0, float height = 0 ) :Circle( radius ) {
            this->height = height;
        }
        ~Cylinder()  {}

        void input()  {
            cout << "������Բ���ĸߺ�Բ���ĵ���뾶" << endl;
            cin >> radius >> height;
        }
        double Cyl_Area()  {
            return 2 * PI * pow( radius, 2) + 2 * PI * radius * height;
        }
        double Cyl_Volume()  {
            return PI * pow( radius, 2 ) * height;
        }
    protected:
        float height;
};

//����Բ׶��
class Cone : public Cylinder  {
    public:
        Cone( float radius = 0, float height = 0 ) {
            Cylinder( radius, height );
        }
        ~Cone()  {}

        void input()  {
            cout << "������Բ׶�ĸߺ�Բ׶�ĵ���뾶" << endl;
            cin >> radius >> height;
        }
        double Con_Area()  {
            return PI * pow( radius, 2 ) + PI * radius * sqrt( pow(radius, 2) + pow( height, 2 ));
        }
        double Con_Volume()  {
            return 1.0 / 3 * Cyl_Volume();
        }
};

int main()  {

    Circle circle;
    Sphere sphere;
    Cylinder cylinder;
    Cone cone;

    circle.input();
    sphere.input();
    cylinder.input();
    cone.input();

    cout << "\nԲ ���   ���\n" << circle.Cir_Area() <<"    " << circle.Cir_Volume() << endl;
    cout << "�� �����   ���\n" << sphere.Sph_Area() <<"  " << sphere.Sph_Volume() << endl;
    cout << "Բ�� �����   ���\n" << cylinder.Cyl_Area() <<"  " << cylinder.Cyl_Volume() << endl;
    cout << "Բ׶ �����   ���\n" << cone.Con_Area() <<"  " << cone.Con_Volume() << endl;

    return 0;
}
