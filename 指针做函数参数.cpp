/*=================================Program Description===========================
��������;ָ������������.cpp
����Ŀ�ģ�����3������������������С�����ֱַ����
����Ҫ�����ֱ��ʹ�����ͺ͸����ͱ��������β����Ӻ����еı仯�����޷����ص�������
          ����˲���ָ��������������
Written By Dong-Hong-yan(2012-4-19)
=================================================================================*/

#include<iostream>
using namespace std;

//��ʵ��x�ֳ�������С�����֣��β�intPart��fracPart��ָ��
void splitFloat(float x, int * intPart, float * fracPart)  {
    * intPart = static_cast<int>(x);  //ȡx����������
    * fracPart = x - * intPart;       //ȡx��С������
}

int main()    {
    cout << "Enter 3 float point numbers: " << endl;
    for(int i = 0; i < 3; i++)  {
        float x, f;
        int n;
        cin >> x;
        splitFloat(x, &n, &f);     //������ַ��Ϊ����ʵ��
        //������ָ����� 1��������ַ 2��������
        cout << "Intgeter Part = " << n << " Fraction Part = " << f << endl;
        }
        return 0;
}
