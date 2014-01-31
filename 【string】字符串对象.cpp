/*==============================Program Description==================================
�������ƣ�string�ַ�������.cpp
����Ŀ�ģ�ͨ�����Ӷ�string�಻ͬ�ķ������м��˽�
Written by Dong-Hong-Yan(2012-4-28)
=====================================================================================*/

#include<iostream>     //����ͷ�ļ�
#include<string>       //����ͷ�ļ�
using namespace std;

//��������
int main()  {
    string str1;           //���캯��string(), str1 = ?
    string str2("efg");    //���캯��string( char *ch ), str2 =efg
    string str3(str2);     //���캯��string( string str ), str1 = str2

    str1 = 'a';                 //��һ���ַ�����string����str1=a
    str2 = "bcde";              //��һ���ַ����鸳��string����str2=efg
    str3 = str2;                //��һ��string���󸳸���һ��string����str3=bcde
    str3 = str1 + str2;         //�������� str3=abcdef
    str3 += '!';                //�������� str3=abcdef��
    char ch1 = str3[1];         //�ַ����±꣬ch1=b
    char ch2 = str3.at(1);      //�ַ����±꣬ch2=b
    str3[2] = 'x';              //�������ӣ�str3=abxdef
    str3.at(2) = 'y';           //�������ӣ�str3=abydef
    string str4;
    str4 = str3.substr(1, 3);   //substr(1, 3)�������Ӵ�str4=byd
    int isize = str3.size();    //size()���ش�Ԫ�ظ���isize=7
    int ileng = str4.size();    //length()���ش�Ԫ�ظ���ileng=7
    cout << "isize = " << isize << endl;
    cout << "ileng = " << ileng << endl;
    cout << "str3 = " << str3 << endl;
    cout << "str4 = " << str4 << endl;
    return 0;
}

/*���ĵá�
1������substr( int, int )���Դ�һ���ַ�������ȡ�������Ӵ�����һ������Ϊ��ԭʼ
   �ַ�������ʼλ��(������0��ʼ)���ڶ����������Ӵ����ַ�����
2���������ַ������±������[]���Ա����at( int )��������ַ�����ĳ���ַ����޸�
   �ַ�����ĳ���ַ�
3���ַ����ıȽϣ�string������֧�����еĹ�ϵ����������԰������ַ��������
   �ַ���������Կ��ַ���β���ַ�������бȽϣ�
   if( str1==str2 )   if( str1 < "abcd")*/
