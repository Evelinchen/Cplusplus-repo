#include<iostream>
using namespace std;

//��Boat�ࡿ���� 
class Boat {
      public:                    //�ⲿ�ӿ� 
             Boat(int weight = 0, int height = 0) :weight(weight), height(height)  {}         //���캯�� 
             Boat(Boat &p);
			 int GetWeight()  {                         //������������ 
			 return weight;
			 }
             friend  int GetTotalWeight();             //��Ԫ���������� 
      private:                  //˽������ 
              int weight;       // ����Boat���������� 
              int height;       //����Boat�����Ը߶� 
              
      };                       //�������Ƿֺ� 
 
 //����Boat�ิ�ƹ��캯��     
Boat::Boat(Boat &p)  {
                weight = p.weight;
                height = p.height;
                }
//��Car�ࡿ 
class Car  {
      public:                                       //�ⲿ�ӿ� 
             Car(int weight = 0, int width = 0) :weight(weight), width(width) {}
             Car(Car &p); 
			 int GetWeight()  {                  //������������ 
			 return weight;
			 }
             friend int GetTotalWeight();           //��Ԫ�������� 
      private:                                       //˽������ 
              int weight;                //����Car���������� 
              int width;                 //����Car�����Կ�� 
      };                //�������Ƿֺ� 
      
//����Car�ิ�ƹ��캯�� 
 Car::Car(Car &p)  {
              weight = p.weight;
              width = p.width;
              }
    
 //������Ԫ����������Ϊ�����             
 int GetTotalWeight(Boat &p1, Car &p2)  {
     int x=p1.GetWeight()+p2.GetWeight();
     return x;
     }

//�������� 
int main()  {
    int total;                  //����total������Ԫ��������ֵ 
    Boat boat(50, 30);          //���岢��ʼ��boat 
    Car car(40, 20);            //���岢��ʼ��car 
    total = GetTotalWeight(boat, car);
    cout<<"The total weight is : "<<total<<endl;
    system("pause");
    return 0;
    } 
