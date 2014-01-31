/*==============================Program  Description===============================
�������ƣ������ϣ��߶���-Line��.cpp
����Ŀ�ģ�ʹ��һ�����������߶Σ�Point������ʾ�˵�
����Ҫ��ʹLine���а���Point�����������p1��p2����Ϊ�����ݳ�Ա��Line����м����߶�
         ���ȵĹ���
Written By Dong-Hong Yan(2012-4-4)
===================================================================================*/
//ͷ�ļ� 
#include<iostream>
#include<cmath>

using namespace std;

//����Point�� 
class Point  {
      public:     //�ⲿ�ӿ� 
             Point(int xx=0,int yy=0) {
                       x=xx;
                       y=yy;
                       cout<<"Calling the constructor Point"<<endl;   
                       }
             Point(Point &p);
             int getX() {return x;}             //����x���� 
             int getY() {return y;}             //����y���� 
      private:    //˽�г�Ա 
              int x,y;
      } ;               //ע������Ķ�������󣬶���һ���ֺ� 

//Point��ĸ��ƹ��캯�� 
Point::Point(Point &p)  {
      x=p.x;
      y=p.y;  
      cout<<"Calling the copy constructor Point"<<endl;           
      } 
      
//������
class Line  {
      public:
             Line(Point xp1,Point xp2);
             Line (Line &l);                   //  ������������"��ĸ"��ͷ�������м�ֻ������ĸ�����ֺ��»��ߡ�_����ɣ�
             double getLen() {return len;}      //���һ���ַ�����������˵������
      private:
              Point p1,p2;
              double len;
      } ;

//�����Ĺ��캯�� ---һ����ʽ�� ����::����(�βα�):��Ƕ����1(�βα�),��Ƕ����2(�βα�),... 
Line::Line(Point xp1,Point xp2):p1(xp1),p2(xp2) {      //����p1(xp1)�൱��p1=xp1; 
                 cout<<"Calling constructor of Line"<<endl;
                 double x=static_cast<double>(p1.getX()-p2.getX());    //����static_cast<����>(���ʽ);ǿ������ת�� 
                 double y=static_cast<double>(p1.getY()-p2.getY());
                 len=sqrt(x*x+y*y);
                  }      

//�����ĸ��ƹ��캯��--������C���а���B���еĶ���b��Ϊ��Ա����ôC��ĸ��ƹ��캯����ʽ���£���ע����C���ⶨ��C::C(C &c1):b(c1.b)  {...} 
//�����˵��һ�㣬���ո�ʽ�� p1(l.p1),p2(l.p2) ����д�ں������ڣ���p1=l.p1 
Line::Line(Line &l):p1(l.p1),p2(l.p2)  {
                cout<<"Calling the copy constructor of Line"<<endl;
                len=l.len;
                } 
 
 //�������� 
 int main()  {
     Point myp1(1,1),myp2(4,5);                       //����Point��Ķ��� 
     Line line(myp1,myp2);                            //����Line��Ķ��� 
     Line line2(line);                               //���ø��ƹ��캯������һ���¶����൱��Line line2=line;���ƣ�����2��Ա����1�Σ������� 
     cout<<"The length of the line is :";
     cout<<line.getLen()<<endl;
     cout<<"The length of the line2 is :";
     cout<<line2.getLen()<<endl;
     system("pause");                                //ʹϵͳ����ʱ����ͣһ�� 
     return 0;
     } 
