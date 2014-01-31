/*=============================Program Description===================================
��������;��̬������.cpp
����Ŀ�ģ��ö�̬�����ڴ�ķ�����������������
written By Dong-Hong-Yan(2012-4-19)
=====================================================================================*/

#include<iostream>
#include<cassert>
using namespace std;

//��Point�ࡿ
class Point {
    public:
        Point(int x = 0, int y = 0) :x(x), y(y)  {}
        int getX() const  {return x;}
        int getY() const  {return y;}
        void move(int newX, int newY)  {
            x = newX;
            y = newY;
        }
    private:
        int x, y;
};

class ArrayOfPoints  {
    public:
        ArrayOfPoints(int size) :size(size)  {
            points = new Point[size];
        }
        ~ArrayOfPoints()  {
            cout << "Deleting..." <<endl;
            delete [] points;     //ɾ����̬�����Ķ������飬���м��[]����
        }

        //����±�Ϊindex������Ԫ��
        Point &element(int index)  {       //��������±�Խ�磬������ֹ
            assert(index >= 0 && index < size);
            return points[index];
        }
    private:
        Point * points; //ָ��̬�����׵�ַ
        int size;       //�����С

};

//��������
int main()  {
    int count;

    cout << "Please enter the count of points: ";
    cin >> count;

    ArrayOfPoints points(count);          //������������

    points.element(0).move(5, 0);         //��������Ԫ�صĳ�Ա
    points.element(1).move(15, 20);       //��������Ԫ�صĳ�Ա
    points.element(5).move(5, 0);         //����������С��5���������±�Խ�磬������ֹ

    return 0;
}
