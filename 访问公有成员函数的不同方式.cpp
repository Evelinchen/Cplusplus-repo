/*===========================Program Description=====================================
�������ƣ����ʶ����г�Ա�����Ĳ�ͬ��ʽ.cpp
����Ŀ�ģ���Ϥ�ֱ��ö�����������ָ�롢��Ա����ָ��Ͷ���������Ա����ָ��Ͷ���ָ�����
Written By Dong-Hong-Yan(2012-4-19)
=====================================================================================*/

#include<iostream>
using namespace std;

//��Point�ࡿ
class Point {
    public:
        Point(int x = 0, int y = 0) :x(x), y(y)  {}
        int getX() const  {return x;}
        int getY() const  {return y;}
    private:
        int x, y;
};

//��������
int main()  {
    Point a(4, 5);
    Point *p1 = &a;         //�������ָ�벢��ʼ��

    //�����������getX()�Ĳ������ʾ��ǰ�棬���ں���ʲôҲ����д
    int (Point::*funcPtr)()const = &Point::getX;     //�����Ա����ָ�벢��ʼ��


    cout << (a.*funcPtr)() << endl;      //ʹ�ó�Ա����ָ��Ͷ��������ʳ�Ա����
    cout << (p1->*funcPtr)() << endl;    //ʹ�ó�Ա����ָ��Ͷ���ָ����ʳ�Ա����
    cout << a.getX() << endl;            //���ö��������ʳ�Ա����
    cout << p1->getX() << endl;          //ʹ�ö���ָ����ʳ�Ա����

    return 0;
}
