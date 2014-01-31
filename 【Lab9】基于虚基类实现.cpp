/*==================================================Progrram Descriptionn=====================================================
�������ƣ����������.cpp
����Ŀ�ģ�����һ����ͬ�Ļ���Person,�����������������๲�е����ݣ�ְ����Employee�ʹ�ѧ����StudentΪ�����Person�������࣬��ְ��ѧ����E_student��ְ����Employee�������ࡣÿ����Ա���е��������£�
            ְ���ࣺ�������Ա����䡢����
            ��ѧ���ࣺ�������Ա����䡢רҵ
            ��ְ��ѧ���ࣺ�������Ա����䡢���š���ʦ
����Ҫ��1.�ü̳к��������ʵ�֣�
2. ���ϸ�������ĸ�ʽ����������������������ʽ��
Written By Dong-Hong-Yan(2012-4-14)
==============================================================================================================================*/

#include<iostream>      //����ͷ�ļ�
#include<string>        //����ͷ�ļ�

using namespace std;    //ʹ�����ֿռ�std

//��������Person
class Person  {
    public:
        string name, sex, age;
        virtual void Input()  {   //���������Ա����
            cin >> name >> age >> sex;
        }
        virtual void Output()  {
            cout << "  "<< name <<"  "
                 << sex << "  "
                 << age << "  ";
        }
};

//��������������Student
class Student  : public Person   {
    public:
        string major;
        void Input()  {
            cout << "������һ����ѧ������Ϣ\n����  ����  �Ա�  רҵ\n";

            Person::Input();
            cin >> major;
        }
        void Output()  {
            cout << "\n\n*********��ѧ����Ϣ**************\n  ����  �Ա�  ����  רҵ\n";

            Person::Output();
            cout << major <<"\n*********************************\n\n";
        }
};
//��������������Employee
class Employee : public Person {
    public:
        string section;
        void Input()  {
            cout << "\n������һ��ְ������Ϣ\n����  ����  �Ա�  ��λ\n";

            Person::Input();
            cin >> section;
        }
        void Output()  {
            cout << "***********ְ����Ϣ**************\n  ����  �Ա�  ����  ��λ\n";

            Person::Output();
            cout << section <<"\n*********************************\n" << " " <<endl;
        }
};


//����������������E_student
class E_student  : public Employee   {
    public:
        string section, tutor;
        void Input()  {
            cout << "\n������һ����ְ��ѧ������Ϣ\n����  ����  �Ա�  ��λ  ��ʦ\n";

            Person::Input();
            cin >> section >> tutor;
        }
        void Output()  {
            cout << "**********��ְ��ѧ����Ϣ*********\n  ����    �Ա�    ����    ��λ    ��ʦ\n";
            Person::Output();

            cout << section << "  " << tutor;
            cout << "\n*********************************\n\n" << " ";
        }
};

int main()  {
    Person *Ptr1, *Ptr2, *Ptr3;

    Ptr1 = new Student;
    Ptr1->Input();       //����Student��Ա����

    Ptr2 = new Employee;
    Ptr2->Input();      //����Employee��Ա����

    Ptr3 = new E_student;
    Ptr3->Input();      //����E_student��Ա����

    Ptr1->Output();     //����Student��Ա����
    Ptr2->Output();     //����Employee��Ա����
    Ptr3->Output();     //����Employee��Ա����

    delete Ptr1;
    delete Ptr2;
    delete Ptr3;

    return 0;
}

/*���ĵá�
1����c++�У���������������һ������Ĺ�ϵ�������ָ�����ָ���������е�
   ���ಿ�֡��磺
   Employee * Ptr;
   Ptr = new Worker;
   Ptr = new Manager;
   ������ֵ��Ч��*/
