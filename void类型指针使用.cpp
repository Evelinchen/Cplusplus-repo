/*================================Program Description==============================
�������ƣ�
����Ŀ�ģ�
Written By Dong-Hong-Yan(2012-4-18)
===================================================================================*/

#include<iostream>
using namespace std;

//����������
int main()  {
    //void voidObject;     ����������void���͵ı���

    void *pv;            //�ԣ���������void���͵�ָ��
    int i = 5;
    pv = &i;             //void���͵�ָ��ָ�����ͱ���
                         //voidָ��һ��ֻ��ָ����ָ����������Ͳ�ȷ��ʱ��
    int *pint = static_cast< int * >(pv);   //���������������ָ�������

    cout << " *pint = " << *pint << endl;

    return 0;
}
