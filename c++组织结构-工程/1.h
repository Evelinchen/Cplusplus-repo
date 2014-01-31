/*=====================================================Program Description================================================
�������ƣ�Pointͷ�ļ�.h
����Ŀ�ģ�ͨ�������Ӽ����c++��֯�ṹ���
Written By Dong-Hong-Yan(2012-4-15)
==========================================================================================================================*/
#ifndef -POINT_H      //�����ﲻһ��Ҫ�ͱ���һ����ֻҪ���� #ifndef��#defineһ������
#define -POINT_H


class Point  {
      public:
             Point(int x = 0, int y = 0) :x(x), y(y)  {}
             Point(const Point &p);                      //���ƹ��캯���Ĳ����ó����ô���
             ~Point()  {count--;}

             int getX() const  {return x;}
             int getY() const  {return y;}

             static void showCount();                      //��̬������Ա �������κ�����������������û�ж���֮ǰ���Ѿ�����
      private:
              int x, y;

              static int count;                   //��̬���ݳ�Ա��û�и�ֵ��ϵͳĬ��Ϊ0
      };                     //�ֺűز�����

#endif
