/*----------------------------Program Description---------------------------
�������ƣ�ָ�����зǾ�̬��Ա��ָ��.cpp
����Ŀ�ģ�������дһ��Point�࣬ͨ��ָ����ʷǾ�̬��Ա
Written By Dong-Hong-Yan(2012-5-27)
----------------------------------------------------------------------------*/

#include<iostream>

using namespace std;

class Point {             //�������
    public:
        Point( int x = 0, int y = 0, int z = 0 ) {    //���캯��
            X = x; Y = y; Z = z;
        }
        int GetX() const  {return X;}        //����������
        int GetY() const {return Y;}         //����������
        int GetZ() const {return Z;}         //����������
    private:
        int X, Y, Z;
};

int main()  {
    Point Obj(4, 5, 6);            //��������Obj
    Point *pObj = &Obj;            //��������ָ�벢��ʼ����

    //���Աָ��ָ�����ķ���ֵ���ͣ�����ǰ��int�Ǻ������ͣ�
    int (Point::* p_GetX)() const = &Point::GetX;   //������Ա����ָ�벢��ʼ��
    int (Point::* p_GetY)() const = &Point::GetY;   //������Ա����ָ�벢��ʼ��
    int (Point::* p_GetZ)() const = &Point::GetZ;   //������Ա����ָ�벢��ʼ��

    cout << "The Coordinate of X is " << (Obj.*p_GetX)() << endl; //ʹ�ó�Ա����ָ��
    cout << "The Coordinate of Y is " << (pObj->GetY)() << endl;//ʹ�ö���ָ��
    cout << "The Coordinate of Z is " << (Obj.GetZ)() << endl;  //ʹ�ö�����

    return 0;
}
/*���ĵá�
1����Ա����ָ������֮����һ����ʽ��ֵ
   ָ����=&����::��Ա����;
2�����ó�Ա����ָ��
   ��������.*���Աָ���������βα�  ����
    ������ָ����->*���Աָ���������βα�*/
