//main.cpp  �ļ�����������


#include<iostream>
#include"Trapzint.h"      //�ඨ��ͷ�ļ�
#include<iomanip>

using namespace std;

//��������
int main() {
    Myfunction f;        //����Myfunction�����
    Trapz trapz(f);      //����Trapz����

    //���㲢������ֽ��
    cout << "TRAPZ Int : " << setprecision(7) << trapz(0, 2, 1e-7) << endl;

    return 0;
}

//����setprecision��int�����ø�������С��λ��������С���㣩  ͷ�ļ�iomanip
//����setw��int����������Ҷ��루����С���㣩iomanip
