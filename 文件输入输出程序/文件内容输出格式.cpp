#include<iostream>            //�ļ�����
#include<fstream>             //������������ļ�
#include<cstdlib>

using namespace std;

//������
int main() {
    fstream file;               //�����������file
    file.open("file1.txt", ios::out);        //������ļ���ʽ�����ı�file.txt
    if(!file) {          //��������������
        cout << "Open Error!" << endl;
        abort();
    }
    file << "i am a super man !" << endl;      //д���ı�
    file.close();    //�رպ���

    return 0;
}
