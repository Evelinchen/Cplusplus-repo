/*===================================Program Description=====================================
�������ƣ�����8-7.cpp.cpp
����Ŀ�ģ�����������Լ��Լ�����Ϊǰ׺�ͺ�׺
Written By Dong-Hong-Yan��2012-6-5��
===========================================================================================*/

#include<iostream>
using namespace std;

//�������
class Point {
    public:
        Point(double x/*=0*/, double y/*=0*/);   //����Ĭ���β�ֵ
        ~Point()  {}
        Point &operator ++();                  //����ǰ�������
        Point &operator ++(int);               //���غ��������
        Point &operator --();                  //����ǰ�������
        Point &operator --(int);               //���غ��������
        friend ostream &operator << (ostream &out, const Point &right);  //����<<�����
    private:
        double x;
        double y;
};
//���캯��
Point::Point(double x = 0, double y = 0) {
    this->x = x;
    this->y = y;
}
//���غ�������
Point &Point::operator ++()  {
    y++;
    x++;

    return * this;
}
//���غ�������
Point &Point::operator ++(int)  {
    Point Temp = * this;
    ++(* this);
    return Temp;
}
//���غ�������
Point &Point::operator --()  {
    y--;
    x--;

    return * this;
}
//���غ�������
Point &Point::operator --(int)  {
    Point Temp = * this;
    --(* this);
    return Temp;
}
//���غ�������
ostream &operator << (ostream &out, const Point &right) {
    cout << "(" << right.x << "," << right.y << ")";
    return out;
}

//[������]
int main()  {
    Point obj1(2, 3), obj2;    //��������ʼ������
    cout << "ǰ׺�Լ�ǰ��" << obj1 << endl; ++obj1; cout << "ǰ׺�ԼӺ�" << obj1 << endl << endl;
    cout << "��׺�Լ�ǰ��" << obj1 << endl; obj1++; cout << "��׺�ԼӺ�" << obj1 << endl << endl;
    cout << "ǰ׺�Լ�ǰ��" << obj2 << endl; --obj2; cout << "ǰ׺�Լ���" << obj2 << endl << endl;
    cout << "��׺�Լ�ǰ��" << obj2 << endl; obj2--; cout << "��׺�Լ���" << obj2 << endl << endl;

    return 0;
}
