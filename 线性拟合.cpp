/*===============================================Program Description===============================================
�������ƣ��������.cpp 
����Ŀ�ģ�����Point����е��������� 
Written By Dong-Hong-Yan(2012-4-15)
===================================================================================================================*/

#include"Pointa.h"
#include<iostream>
#include<cmath>

using namespace std;

//ֱ��������ϣ�pointsΪ���㣬npointΪ����
float lineFit(const Point points[], int npoint)  {
      
      float avgX = 0, avgY = 0;
      float lxx = 0, lyy = 0, lxy = 0;
      
      for(int i = 0; i<npoint; i++)  {
              avgX += points[i].getX() / npoint;                   //������ע�������㣬��/�������ȼ����ڡ�+= �� 
              avgY += points[i].getY() / npoint;
              
              }
              
      //����lxx��lyy��lxy 
      for(int i = 0; i < npoint; i++)  {
              lxx += (points[i].getX() - avgX) * (points[i].getX() - avgX);               
              lyy += (points[i].getY() - avgY) * (points[i].getY() - avgY);
              lxy += (points[i].getX() - avgX) * (points[i].getY() - avgY);
              }
              
      cout<<"This line can be fitted by y = ax + b."<<endl;
      cout<<"a = "<<lxy/lxx<<" ";                                  //����ع�ϵ��a                       
      cout<<"b = "<<avgY - lxy * avgX / lxx<<endl;                 //����ع�ϵ��b 
      
      return static_cast<float>(lxy / sqrt(lxx * lxy));            //�������ϵ����ǿ������ת�� 
      } 

//�������� 
int main()  {                 //��ʼ�����ݵ� 
    Point p[10] = {Point(6, 10), Point(14, 20), Point(26, 30), Point(33, 40), Point(46, 50),
                   Point(54, 60), Point(67, 70), Point(75, 80), Point(84, 90), Point(100, 100)};
    
    float r = lineFit(p, 10);            //�������Իع���㣬��r�����պ�������ֵ 
    cout<<"Line coefficient r = "<<r<<endl;
    
    system("pause");
    return 0;    
    }
