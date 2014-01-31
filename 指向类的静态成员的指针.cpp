/*==================================================Program Description====================================================
�������ƣ�ָ����ľ�̬��Ա��ָ��.cpp 
����Ŀ�ģ�ͨ��ָ�������ľ�̬���ݳ�Ա 
Written By Dong-Hong-Yan(2012-4-16)
===========================================================================================================================*/

#include<iostream>
using namespace std;

//��Point�ࡿ 
class Point  {
      public:          //�ⲿ�ӿ� 
             Point(int x = 0, int y = 0) :x(x), y(y)  {          //���캯�� 
                       count++;
                       }
             Point(const Point &p) :x(p.x), y(p.y)  {            //���ƹ��캯�� 
                         count++;
                         }
             ~Point()  { count--; }                               //�������� 
             
             int getX()  { return x; }
             int getY()  { return y; }
             
             static int count;                  //��̬���ݳ�Ա���������ڼ�¼��ĸ��� 
      private:           //˽������ 
              int x, y; 
      }; 

int Point::count = 0;                    //��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶� 

 //�������� 
int main()  {
    int *ptr = &Point::count;        //����һ��int��ָ�룬ָ����ľ�̬��Ա   ��ʽΪ  ָ����=&����::������Ա�� 
    Point a(4, 5);                   //�������a 
    
    cout<<"Point A: "<<a.getX()<<","<<a.getY();
    cout<<"  Object count = "<<* ptr<<endl;          //ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա
    
    Point b(a);                                //�������b 
    cout<<"Point B: "<<b.getX()<<","<<b.getY();
    cout<<"  Object count = "<<* ptr<<endl;          //ֱ��ͨ��ָ����ʾ�̬���ݳ�Ա 
    
    system("pause");
    return 0;
    }
