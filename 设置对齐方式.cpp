/*=======================Program Description===============================
��������:���ö��䷽ʽ.cpp
����Ŀ��:ͨ����ϰ���룬ϰ�߸��ֺ���
Written By Dong-Hong-Yan(2012-5-27)
===========================================================================*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(void)  {
    double values[] = {2, 12, 326, 5687};
    for( int i=0; i<4; i++ ) {
        cout.fill('#');   //fill��Ա��������Ϊ�Ѿ�ָ����ȵ�����������ֵ
        cout << setiosflags(ios::left) << setw(6) <<values[i];
        cout.fill('#');
    }
    cout << resetiosflags(ios::left);  //resetiosflags�����������־
    cout << endl;
    for(int j=0; j<4; j++)  {
        cout << setiosflags(ios::right) << setw(6) << values[j];
        cout.fill('#');
    }
    return 0;

}
//�������Ϊ6��ȫ����Ϊ6����
