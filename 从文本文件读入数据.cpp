/*================================Program Description===================================
�������ƣ����ı��ļ���������.cpp
����Ŀ�ģ���ϰ���ı��ļ���������
Writeen By Dong-Hong-Yan(2012-5-16)
========================================================================================*/

#include<iostream>
#include<fstream>         //ʹ���ļ�����   �ļ���������������
using namespace std;

//��������
int main( void )   {
    fstream infile;        //����һ���ļ��������������
    infile.open("E:/test.txt", ios::in );     //�ļ�λ�úʹ򿪷�ʽ���ǡ����򿪡���
    if( !infile )  {
        cout << "Error occured while opening test.txt" << endl;
        return 0;
    }
    char textline[80];
    while( !infile.eof() )  {        //���ļ�����ʱ��Ĭ��ֵ��-1
        infile.getline( textline, sizeof( textline ) );  //���ļ����ݣ�ǰ80������������
        cout << textline <<endl;                         //�����������ʾ
    }
    infile.close();       //�ļ��Ĺر�
    return 0;
}
