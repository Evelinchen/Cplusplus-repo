/*=============================Program Description======================================
�������ƣ��������.cpp
����Ŀ�ģ�ͨ�������˽�Ϊ����Ҫ��ƣ��Լ���������!
Written By Dong-Hong-Yan(2012-6-13)
========================================================================================*/

#include<iostream>
#include<cassert>           //�ļ�����

using namespace std;      //�����ռ�

//����Point��
class Point {
    public:                   //�ⲿ�ӿ�
        Point() :x(x), y(y) {                                 //�޲εĹ��캯��
            cout << "Default constructor called!." << endl;
        }
        Point(int x, int y) :x(x), y(y) {                     //�вεĹ��캯��
            cout << "Constructor called!." << endl;
        }
        ~Point() {cout << "Destructor called!." <<endl;}   //������������
        int getX() const {return x;}
        int getY() const {return y;}
        void move(int newX, int newY)  {        //�ƶ�����
            x = newX;
            y = newY;
        }
    private:                       //˽�����ݳ�Ա
        int x, y;
};

//���嶯̬������
class ArrayOfPoints {
    public:
        ArrayOfPoints(const ArrayOfPoints &v);           // �����ǰ���Ƶ���ͬ��
        ArrayOfPoints(int size) :size(size) {
            points = new Point[size];
        }
        ~ArrayOfPoints() {
            cout << "Deleting..." << endl;
            delete [] points;
        }
        Point &element(int index) {         //���ض�̬���������indexԪ��
            assert(index >= 0 && index < size);
            return points[index];
        }
    private:
        Point * points;
        int size;
};

//��ƺ����Ķ��壬����Ҳ���ƣ�����û��ʲô��ϵ
ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints &v) {
    size = v.size;
    points = new Point[size];
    for(int i = 0; i <size; i++) {
        points[i] = v.points[i];
    }
}

//����������
int main() {
    int count;
    cout << "Please enter the count of points: ";
    cin >> count;
    ArrayOfPoints pointsArray1(count);
    pointsArray1.element(0).move(5, 10);
    pointsArray1.element(1).move(15, 20);

    ArrayOfPoints pointsArray2 = pointsArray1;
         //�����õ�������ƣ�����Ҳ����
    //��������������ָ��ͬһ���ڴ棬�ֱ������

    cout << "Copy of pointsArray1: " << endl;
    cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ","
         << pointsArray2.element(0).getY() << endl;
    cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ","
         << pointsArray2.element(1).getY() << endl;

    pointsArray1.element(0).move(25, 30);         //�����ƶ�pointArray1��ֵ
    pointsArray1.element(1).move(35, 40);         //ȴ���ı�pointArray2��ֵ���������ޱ�Ȼ��ϵ

    cout << "After the moving of pointsArray1: " << endl;
    cout << "Point_0 of array2 : " << pointsArray2.element(0).getX() << ","
         << pointsArray2.element(0).getY() << endl;
    cout << "Point_1 of array2 : " << pointsArray2.element(1).getX() << ","
         << pointsArray2.element(1).getY() << endl;

    return 0;
}
