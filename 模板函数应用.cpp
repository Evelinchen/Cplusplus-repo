/*=====================================Program Description============================================
��������:ģ�庯��Ӧ��.cpp
����Ŀ��:Ҫ������ģ�庯��������ʽ��
         template<ģ�������>  class ���� {���Ա����}
Written By Dong-Hong-Yan(2012-5-30)
======================================================================================================*/

#include<iostream>
#include<cstdlib>
using namespace std;

struct Student {            //�ṹ��Student
    int id;                 //ѧ��
    float gpa;              //ƽ����
};
//��ߴ����������
template <class T>                         //��ģ�壺ʵ�ֶ������������ݽ��д�ȡ
class Store {
    public:
        Store();                           //Ĭ����ʽ�����βΣ��Ĺ��캯��
        T &getElem();                      //��ȡ���ݺ���
        void putElem(const T &x);          //�������ݺ���
    private:
        T item;                                //item��������������͵�����
        bool haveValue;                        //haveValue���item�Ƿ��ѱ���������
};

template<class T>
Store<T>::Store():haveValue(false) {}        //Ĭ�Ϲ��캯����ʵ��

template<class T>
T &Store<T>::getElem() {                    //��ȡ���ݺ�����ʵ��
    if(!haveValue) {                              //�����ͼ��ȡδ��ʼ�������ݣ�����ֹ����
        cout << "No,item present!" << endl;
        exit(1);                                //�ǳ�����ȫ�˳������ز���ϵͳ
    }
    return item;                              //����item�д�ŵ�����
}

template<class T>
void Store<T>::putElem(const T &x) {     //�������ݵ�ʵ��
    haveValue = true;                    //��haveValue��Ϊtrue����ʾitem�Ѵ�������
    item = x;                            //��x����item
}

//��������
int main() {
    Store<int>s1, s2;    //��һ����Store<int>������������ݳ�ԱitemitemΪint����
    s1.putElem(3);          //�����s1�д������ݣ���ʼ������s1��
    s2.putElem(-7);         //�����s2�д������ݣ���ʼ������s2��
    cout << s1.getElem() << " " << s2.getElem() << endl;
                  //�������s1��s2�����ݳ�Ա
    Student g ={1000, 23};          //����Student���ͽṹ�������ͬʱ�����ֵ
    Store<Student>s3;               //��s3�д������ݣ���ʼ������s3��
    s3.putElem(g);
    cout << "The student id is " << s3.getElem().id << endl;
                 //�������s3�����ݳ�Ա
    Store<double>d;            //����Store<double>�����d���������ݳ�ԱitemΪdouble����
    cout << "Retrieving object d...";
    cout << d.getElem() << endl;          //�������d�����ݳ�Ա

    return 0;
}
