/*===================================Program Description================================
�������ƣ����Ҹ����ַ����ַ���.cpp
����Ŀ�ģ��������������Һ�������
Written By Dong-Hong-Yan(2012-5-19)
========================================================================================*/

#include<iostream>
#include<cstring>
using namespace std;

//��������
int main()  {
    char str[] = "The Mississippi is a long river.";
    cout << "str = \" " << str << " \" \n";
    char * p = strchr( str, ' ' );
    cout << "strchr( str, ' ' ) points to str[" << p-str << "].\n";
    p = strchr( str, 's' );
    cout << "strchr( str, 's' ) points to str[" << p-str << "].\n";
    p = strrchr( str, 's' );
    cout << "strrchr( str, 's' ) points to str[" << p-str << "].\n";
    p = strstr( str, "is" );
    cout << "strctr( str, \"is\" ) points to str[" << p-str << "].\n";
    p = strstr( str, "isi" );
    if( p == NULL )
    cout << "strctr( str, \"isi\" ) returns NULL\n";

    return 0;
}
/*���ĵá�
1��char * strchr( const char * string, int c );
   ���ַ���string�У������ַ�c���ֵĵ�һ��λ�ã����û���ҵ�c���򷵻�NULL��
2��char * strrchr( const char * string, int c );
   ���ַ���string�У������ַ�c���ֵ����һ��λ�á�
3��char * strshr( const char * string, const char * strCharSet );
   ���ַ���string�У������ַ���strCharSet��һ�γ���λ�á�*/
