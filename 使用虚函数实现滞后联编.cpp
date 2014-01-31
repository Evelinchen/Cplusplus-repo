/*==================================================Progrram Descriptionn=====================================================
�������ƣ�ʹ���麯��ʵ���ͺ�����.cpp
����Ŀ�ģ�Ϊ��������Ϊ����ģ���������ǰ��һ���ؼ���virtual����������Ϊ�����
          ��Ϊ����ִ�����������ģ����������õĻ���ָ������ݣ�
Written By Dong-Hong-Yan(2012-4-14)
==============================================================================================================================*/

#include<iostream>      //����ͷ�ļ�
#include<string>        //����ͷ�ļ�

using namespace std;    //ʹ�����ֿռ�std

//��������Employee
class Employee  {
    public:
        virtual void Cal_salary()  {   //���������Ա����
            cout << "���û���Employee��Ա���� " << endl;
        }
};

//��������Worker
class Worker : public Employee {
    public:
        void Cal_salary()  {
            cout << "��������Worker��Ա���� " << endl;
        }
};

//��������Manager
class Manager  : public Employee   {
    public:
        void Cal_salary()  {
            cout << "��������Manager��Ա���� " << endl;
        }
};

int main()  {
    Employee * Ptr;
    Ptr = new Employee;
    Ptr->Cal_salary();       //����Employee��Ա����
    delete Ptr;

    Ptr = new Worker;
    Ptr->Cal_salary();      //�������Worker��Ա����
    delete Ptr;

    Ptr = new Manager;
    Ptr->Cal_salary();      //�������Manager��Ա����

    delete Ptr;

    return 0;
}

/*���ĵá�
1����c++�У���������������һ������Ĺ�ϵ�������ָ�����ָ���������
   �κ�һ�������磺
   Employee * Ptr;
   Ptr = new Worker;
   Ptr = new Manager;
   ������ֵ��Ч��*/
