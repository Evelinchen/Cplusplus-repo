#include<iostream>
#include<fstream>
#include<cstdlib>             //�ļ��������õ�abort()����

using namespace std;

int main()  {
    ofstream file("file.txt", ios::app);        //���������׷�ӣ�ֻ����ofstram���壬fstream�Ͳ���
    if(!file) {
        cout << "File open error !" << endl;
        abort();
    }
    file << "How about you ?" << endl;           //׷������
    file.close();      //�ļ����ر�

    return 0;
}

