/*=======================Program Description==============================
�������ƣ����麯������.cpp
����Ŀ�ģ��麯���ͺ�����
Written By Dong-Hong-Yan(2012-5-12)
==========================================================================*/

#include<iostream>
using namespace std;

class  Publication   {
    public:
        string title;
        float price;
        virtual void getData(string name, float rate, int temp) {
            title=name;
            price=rate;
        }
        virtual void putData() {
            cout << "Title: " << title << endl;
            cout << "Price " << price << endl;
        }
};

//�Ի�����麯����������Ӳ������������������һЩ��ӵı���
class book : public Publication  {
        public:
            int pagecount;
            void getData(string name, float rate,int pages) {
                Publication::getData(name,rate,pages);  //����һ������д��β���
                pagecount=pages;
            }
            void putData() {
            Publication::putData();
            cout << "PageCount: " << pagecount << endl;
            }
};

//�Ի�����麯����������Ӳ������������������һЩ��ӵı���
class tape : public Publication {
    public:
        int playTime;
        void getData(string name, float rate, int timer) {
        Publication::getData(name, rate, timer);  //����һ������д��β���
        playTime=timer;
        }
        void  putData() {
        Publication::putData();
        cout << "PlayTime: " << playTime << endl;
        }
};

//��������
int main() {
    Publication * p;

    p = new book;
    p->getData("book ", 100, 1);
    p->putData();
    delete p;

    p = new tape;
    p->getData("type ", 50, 2);
    p->putData();
    delete p;

    return 0;
}

/*���ĵá�
1���������麯������ͬ�Ĳ���������
2��������������������麯���Ķ�Ӧ����������ͬ��
3���䷵��ֵ����������麯������ͬ�����߶�����'ָ��'��'����'������
   �������麯�������ص�ָ������õĻ������ǻ����б��滻���麯��
   �����ص�ָ������õĻ����͵������͡�
   */
