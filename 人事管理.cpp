/*===================================Program  Description======================================
�������ƣ����¹���.cpp
����Ŀ�ģ�����Ա����Ϣʵ��¼�����ʾ��������š��Ա𡢳������ڡ����֤�ŵ�
����Ҫ�󣺱���Ϊ�����ϣ�����һ����Ա�࣬��Ƕ������-�Ӷ��󡣱����й��캯�����������������ƹ���
         ����������Ա��������Ĭ���β�ֵ�ĳ�Ա�����������ϡ�        
written By Dong-Hong-Yan (2012-4-5)
===============================================================================================*/

#include<iostream>
using namespace std;

//�������ࡿ 
class Date  {
      public:                //�ⲿ�ӿ� 
             Date() :year(0), month(0), day(0) {}
             void GetDate();
             int GetYear()
			 {
			   return year;
			 }
			 int GetMonth()
			 {
			    return month;
			 }
			 int GetDay()
			 {
			    return day;
			 }
			 /*void SetYear(int dyear)
			 {
			    //��������������У��
				this.year=dyear;
			 }
			 void SetMonth(int dmonth)
			 {
			    this.month=dmonth;
			 }
			 void SetDay(int dday)
			 {
			    this.day=dday;
			 }*/
             ~Date() {} 
			/* string ToString()
			 {
			    char[100] tmp;
				sprintf(tmp,"%d-%d-%d",year,month,day);
				return string(tmp);
			 }*/
      private:          //˽������ 
              int year;      //������� 
              int month;     //�����·� 
              int day;       //�������� 
      };

 //����������Ϣ���뺯��     
inline void Date::GetDate()  {
     cin>>year>>month>>day;
     }
 
//����Ա�ࡿ 
class Person  {
      public:
             //���캯���������Լ����壬���Բ�ͬʱ��ʼ������˽�г�Ա�������Բ����Σ���Dateһ�� 
			 Person(int man_num = 0, char sex = '\0', int id = 0):man_num(man_num), sex(sex), 
             id(id) {}
             Person(Person &p); 
			 void Get_Info();
             void Show_Info();
             ~Person()  {}  		
      private:
              int man_num;     //������˱�� 
              char sex;        //�����Ա� 
              Date birth_day;  //����������� 
              int id;          //�������֤�� 
      };

//��Ա��-���ƹ��캯���Ķ���      
Person::Person(Person &p): man_num(p.man_num), sex(p.sex), id(p.id) { 
                      birth_day=p.birth_day;
                      }

//��Ա��������Ϣ������ͨ��Ƕ�����࣬������������뺯�� 
void Person::Get_Info()  {
	 cout<<"Please enter your man_num, sex, id, year, month, day:";
     cin>>man_num>>sex>>id;
     birth_day.GetDate();
     }
//��Ա��������Ϣ������ͨ��Ƕ������,����������������                 
void Person::Show_Info()  {
     cout<<"The information you entered is :"<<endl;
     cout<<man_num<<" ";
     cout<<sex<<" ";
     //cout<<birth_day.year<<" ";
     //cout<<birth_day.month<<" ";
     //cout<<birth_day.day<<" ";
	 //����1
	 cout<<birth_day.GetYear()<<" ";
	 cout<<birth_day.GetMonth()<<" ";
	 cout<<birth_day.GetDay()<<" ";
	 cout<<id<<endl;
	 /*//����2
	 cout<<birth_day.ToString();
	 
     cout<<id<<" "<<endl;  
     */  
     }



// ��������
int main()  {
    Date date;        //���������������� �����Բ������� 
    Person man;       //������������Ա�࣬���Բ������� 
    man.Get_Info();
    man.Show_Info();
    system("pause");
    return 0;
    }
      

