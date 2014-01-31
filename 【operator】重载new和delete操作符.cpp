/*================================Program Description==================================
�������ƣ�����new��delete������.cpp
����Ŀ�ģ���дһ��������CRect���Գ�Ա������ʽ����new��delete�����������ڶԸ������
          �ڴ����
Written By Dong-Hong-Yan(2012-5-23)
=======================================================================================*/

#include<iostream>
#include<malloc.h>

using namespace std;

class CRect   {
    public:
        Crect( int l, int w )  { length = l; width = w; }
        void disp()  { cout << "The area is : " << length * width << endl; }
        void * operator new( size_t size )  { return malloc(size); }
        void operator delete( void * p )  { free(p); }
    private:
        int length, width;
};

int main()  {
    CRect * p;
    p = new CRect(5, 9);
    p->disp();
    delete p;

    return 0;
}
