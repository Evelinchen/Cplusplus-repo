/*=====================================================Program Description================================================
�������ƣ�c++����֯�ṹ.cpp 
����Ŀ�ģ�ͨ�������Ӽ����c++��֯�ṹ��� 
Written By Dong-Hong-Yan(2012-4-15)
==========================================================================================================================*/

#include"1.h"
#include<iostream>

using namespace std;

//�������� 
int main()  {
    Point a(4, 5);
    cout<<"Point A: "<<a.getX()<<","<<a.getY();
    Point::showCount();                                 //��̬������Ա��ֱ������������ 
    
    Point b(a);
    cout<<"Point B: "<<b.getX()<<","<<b.getY();
    Point::showCount();
    
    system("pause");
    return 0;
    }
