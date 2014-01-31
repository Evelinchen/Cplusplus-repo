/*==============================Program Description========================
�������ƣ���̬��̬�ԺͶ�̬��̬��.cpp
����Ŀ�ģ�����ְԱ��ѧԱ�Ĳ��ϣ�����ʾ��ְԱ��ѧԱ
          ������ͬ�������ǣ�
            ���������䡢���պ͵绰��
          ��ͬ�������ǣ�
            ְԱ�й��ʣ�ѧԱ�п��Է�����
Written By Dong-Hong-Yan(2012-5-12)
===========================================================================*/

#include<iostream>
#include<string>

using namespace std;

//�������Person
class Person  {
    public:
        virtual void Accept()  {
            cout << "������������";   cin >> cName;
            cout << "���������䣺";   cin >> iAge;
            cout << "���������գ�";   cin >> cBirth;
            cout << "������绰��";   cin >> cPhone;
        }
        virtual void Display()  {
            cout << "����������ǣ�" << cName << endl;
            cout << "����������ǣ�" << iAge << endl;
            cout << "����������ǣ�" << cBirth << endl;
            cout << "����ĵ绰�ǣ�" << cPhone << endl;
        }
    protected:
        char cName[20];
        int iAge;
        char cBirth[12];
        char cPhone[15];
};

//��������Employee
class Employee : public  Person  {
    public:
        void Accept()  {            //���������Ա����
            cout << "\n----������ְԱ�ĸ�����Ϣ----"  << endl;
            Person::Accept();
            cout << "�����빤�ʣ� ";
            cin >> Salary;
        }
        void Display()  {           //���������Ա����
            cout << "\n----��ʾְԱ�ĸ�����Ϣ----" << endl;
            Person::Display();
            cout << "����Ĺ����ǣ� " << Salary << endl;
        }
    private:
        float Salary;
};

//��������Student
class Student : public Person {
    public:
        void Accept()  {          //���������Ա����
            cout << "\n----������ְԱ�ĸ�����Ϣ----"  << endl;
            Person::Accept();
            cout << "����������� ";
            cin >> Score;
        }
        void Display()  {         //���������Ա����
            cout << "\n----��ʾְԱ�ĸ�����Ϣ----" << endl;
            Person::Display();
            cout .<< "����ķ����ǣ�" << Score << endl;
        }
    private:
        float Score;
};

int main()  {
    Person * Ptr;
    Ptr = new Employee;
    Ptr->Accept();
    Ptr->Display();
    delete Ptr;

    Ptr = new Student;
    Ptr->Accept();
    Ptr->Display();
    delete Ptr;

    return 0;
}
/*���ĵá�
1����̬��̬�ԣ�ָ����������ͬ�ĺ���������ͬ�ĺ��������б�
2������̬��̬�ԣ�ָ������ͬ�ĺ���������ͬ�ĺ��������б�
   �����Ǻ�������벻ͬ
3��Person�������������Ϊ�麯�������麯�����̳�ʱ��Ҳ�̳������������ʡ�
   Employee��Student�����������������ģ�*/
