/*==========================================================Program Description====================================================
�������ƣ����������β�.cpp 
����Ŀ�ģ�ͨ��ʾ����const����������
Written By Dong-Hong-Yan(2012-4-15)
===================================================================================================================================*/

#include<iostream>
#include<cmath>
using namespace std;

class Point  {
      public:
             Point(int x = 0, int y = 0) :x(x), y(y)  {}
             Point(const Point &p);  
             int getX()  {return x;}
             int getY()  {return y;}
             
             friend float dist(const Point &p1, const Point &p2);
      private:
              int x, y;
      };    //�ֺ�i�ز�����
 
//���帴�ƹ��캯���Ĳ���       һ�㶼�ó����ô���     
Point::Point(const Point &p) :x(p.x), y(p.y)  {
                   cout<<"Calling the copy constructor!"<<endl;
                   }   
                   
//��Ԫ��������     �������ó��������β�                     
float dist(const Point &p1, const Point &p2) {
      
      double x = p1.x - p2.x;
      double y = p1.y - p2.y;
      
      return static_cast<float>(sqrt(x * x + y * y));                //ǿ������ת�� 
      } 

//��������  
int main()  {
    const Point myp1(1, 1), myp2(4, 5);                   //����Point����� 
    
    cout<<"The distance is : ";
    cout<<dist(myp1, myp2)<<endl;                         //������������ 
    
    system("pause");
    return 0;
    }
