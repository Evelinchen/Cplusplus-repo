/*=============================Program Description===================================
�������ƣ�����ָ��ʾ��.cpp
����Ŀ�ģ��������պ���ָ��
Written By Dong-Hong��Yan(2012-4-19)
=====================================================================================*/

#include<iostream>
using namespace std;

void printStuff(float)  {
    cout << "This is the print stuff function!" << endl;
}

void printMessage(float data)  {
    cout << "The data to be listed is " << data <<endl;
}

void printFloat(float data)  {
    cout << "The data to be listed is " << data <<endl;
}

//һ������£����������������ȫ��double��˫���ȣ��ģ�Ϊ�˱�ʾ�����ȣ��������ݺ��f
//ʹ������������У����ֵ�����
const float PI = 3.14159f;
const float TWO_PI = PI * 2.0f;

//��������
int main()  {
    void (* functionPointer)(float);     //���庯��ָ��
    printStuff(PI);
    functionPointer = printStuff;        //����ָ��ָ��printstuff�����ô�����
    functionPointer(PI);                 //����ָ�����
    functionPointer = printMessage;
    functionPointer(TWO_PI);
    functionPointer(13.0);
    functionPointer = printFloat;
    functionPointer(PI);
    printFloat(PI);

    return 0;
}
