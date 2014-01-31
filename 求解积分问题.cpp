/*==================================================Progrram Descriptionn=====================================================
�������ƣ�����������.cpp
����Ŀ�ģ��þ��η����󶨻���Y=1/x�ڣ�a,b���ϵĻ���
Written By Dong-Hong-Yan(2012-4-14)
==============================================================================================================================*/

#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

double g(double x)  {
    return 1 / x;
}
//double(*f)(double)----������ע��
double rectangle(double a, double b, double(*f)(double))  {
    double w = b - a, sumNew = w * (f(a) + f(b)) / 2, sumOld = 0;
    for(int n = 1; abs(sumNew - sumOld) >= 1e-4; n *= 2)  //����ָ����ʾ������ӿո񣬷�����ָ��
    {
        sumOld = sumNew;
        sumNew = 0;
        for(int i = 0; i < n; ++i)
        {
            sumNew += f(a + w * (i + 0.5) / n);
            sumNew *= w / n;
        }
    }
    return sumNew;
}

int main()  {
    double a, b;
    cout << "input a: " << endl;
    cin >> a;
    if(a <0 || a ==0)
    cout << "input error!" << endl;
    cout << "input b: " << endl;
    cin >> b;

    if(b < a)
    cout << "input error!" << endl;
    cout << "y= " << rectangle(a, b, g) << "\n";

    return 0;
}
/*���ĵá�
1��gaiss_ch2()�Ǻ���,����2����������һ���Ǻ���ָ�룬�ڶ�����int��������
   double (*f)(double) �Ǹ�����ָ�룬f����һ��ָ�����������ָ�򷵻�
   double��������double �ĺ��������� double fun��double��; f = fun;
   ����gauss_ch2ʱ���� gauss_ch2( f, 21 )�������ˡ�*/
