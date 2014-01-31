/*==================================Program Description================================
�������ƣ�ת��Ϊc����char *��ʽ.cpp
����Ŀ�ģ�ʹstring��ĳ�Ա����ת��Ϊc����char * ��ʽ
Written By Dong-Hong-Yan(2012-5-19)
=======================================================================================*/

#include<iostream>
#include<string>

using namespace std;

int main()  {
    string str( "STRINGS" );
    const char * ptr1 = 0;
    int length = str.length();
    char * ptr2 = new char[ length + 1 ];  //��̬����һ���ַ����飬����null������
    str.copy( ptr2, length, 0 );         //��str�������ַ����Ƶ������ڴ���
    ptr2[ length ] = '\0';                  //���null��ֹ��
    cout << "string s is " << str << "\nstr converted to a C-Style string is "
         << str.c_str() << "\nptr1 is ";
    ptr1 = str.data();                     //ʹ�ó�Ա����data
    for( int i = 0; i < length; i++ )
        cout << * (ptr1 + i );
    cout << "\nptr2 is " << ptr2 << endl;       // ʹ��ָ�����
    delete [] ptr2;
    return 0;
}
