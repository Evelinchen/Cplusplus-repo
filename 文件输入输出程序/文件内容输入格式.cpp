#include<iostream>
#include<fstream>
#include<cstdlib>             //�ļ��������õ�abort()����

using namespace std;

//����������
int main()  {
    fstream file("file.txt", ios::in);       //��������������
    if(!file) {
        cout << "File open error !" << endl;
        abort();        //��ֹ����
    }
    char array[50];
    while(!file.eof())  {                  //���ı����ݶ�ȡ      eof���ı������ı�־
        file.getline(array, sizeof(array));       //ʹ��getline������ȡ
        cout << array << endl;          //sizeof(array)��������ĳ���
    }
    file.close();         //�ļ�������ر�

    return 0;
}
