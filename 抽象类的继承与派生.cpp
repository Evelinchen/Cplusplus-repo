//����7-5

#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.1515926;

//���������Shape
class Shape  {
    public:
        Shape( int num1 = 0 ): num1(num1) {}
        virtual void Input() = 0;              //���麯��
        virtual void Output() = 0;             //���麯��
        virtual double getArea() = 0;          //���麯��
        float num1;
};

//���������
class Rectangle : public Shape {
    public:
        Rectangle( int num2 = 0 ): num2(num2)  {}
        void Input()  {
            cout << "��������εĳ��Ϳ�:";
            cin >> num1 >> num2;
        }
        void Output()  {
            cout << "���������:" << getArea() << endl << endl;
        }
        double getArea()  {
            return num1 * num2;
        }
    private:
        double num2;
};

//����Circle��
class Circle :  public Shape {
    public:
        Circle()  {}
        void Input()  {
            cout << "������Բ�İ뾶:";
            cin >> num1;
        }
        void Output()  {
            cout << "Բ�������:" << getArea() << endl << endl;
        }
        double getArea()  {
            return PI * pow( num1, 2 );
        }
};

//����Square��
class  Square: public Rectangle {
    public:
        void Input()  {
            cout << "�����������εı߳�:";
            cin >> num1;
        }
        void Output()  {
            cout << "�����������:" << getArea() << endl << endl;
        }
        double getArea()  {
            return pow( num1, 2 );
        }
};

//������
int main()  {
    Shape * shape;         //�������ָ��

    shape = new Rectangle;  //�ֱ�����������Ա����
    shape->Input();
    shape->Output();
    delete shape;

    shape = new Circle;    //�ֱ�����������Ա����
    shape->Input();
    shape->Output();
    delete shape;

    shape = new Square;   //�ֱ�����������Ա����
    shape->Input();
    shape->Output();
    delete shape;

    return 0;
}

//1���ڼ̳����У������˽�г�Ա��������Ա�����˳�ʼ��������Ĭ��ֵ��
//   �����������У������ٳ�ʼ����ʡ�£�����
//2��ֻ�����ڶ��ؼ̳У�һ��Ҫ���ֶ��̳У��У���������࣬����Ϊ
//   �¼̳�·����ͬ�����ظ���ʼ�����������
//3��ע�⣺�麯�����Ǻ����������أ�������������ͬ���������������ͻ������ͬ��

