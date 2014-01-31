/*===========================Program Description===========================
�������ƣ���������ظ�����.cpp
����Ŀ�ģ�ʵ�ָ�����+��-��*��/���㡣
����Ҫ��1. +��*Ϊ���������
          2. -��/Ϊ��Ԫ�������
          3. ������ʵ�����鲿Ϊʵ����
Written By dong-Hong-Yan(2012-5-30)  
===========================================================================*/

#include<iostream>
using namespace std;

class Complex {
    public:
        Complex(double real = 0, double imag = 0)  {
            this->real = real;
            this->imag = imag;
        }
        void input() {
            cout << "������һ��������ʵ��  �鲿" << endl;
            cin >> real >> imag;
        }
        void display()  {


            cout << real << " + " << imag << 'i' << endl;
        }
        ~Complex()  {}

      //���ؼӷ�����
        Complex operator + (const Complex &right) const  {
            Complex temp;
            temp.real = real + right.real; temp.imag = imag + right.imag;
            cout << "a + b = " << temp.real << " + " << temp.imag << 'i' <<endl;
            return temp;
        }

      //���ؼ�������
        Complex operator - (const Complex &right)  {
            Complex temp;
            temp.real = real - right.real; temp.imag = imag - right.imag;
            if(temp.imag < 0)
                cout << "a - b = " << temp.real << " + (" << temp.imag << ") i" <<endl;
            else
                cout << "a - b = " << temp.real << " + " << temp.imag << "i" <<endl;

            return temp;
        }

      //���س˷�����
       friend Complex operator * (const Complex &obj, const Complex &right);

      //���س�������
        friend Complex operator / (const Complex &obj, const Complex &right);
    private:
        double real;
        double imag;
};

        Complex operator * (const Complex &obj, const Complex &right)  {
            Complex temp;
            temp.real = obj.real * right.real - obj.imag * right.imag;
            temp.imag = obj.imag * right.real + obj.real * right.imag;
            cout << "a * b = " << temp.real << " + " << temp.imag << 'i' << endl;
            return temp;

        }

         Complex operator / (const Complex &obj, const Complex &right)  {
            Complex temp;
            if((right.real * right.real + right.imag * right.imag) == 0)
            {
                cout << "a / b = " << 0 << " + " << 0 << 'i' << endl;
                return 0;
            }
            else {
            temp.real = (obj.real * right.real + obj.imag * right.imag)/(right.real * right.real + right.imag * right.imag);
            temp.imag = (obj.imag * right.real - obj.real * right.imag)/(right.real * right.real + right.imag * right.imag);
            cout << "a / b = " << temp.real << " + " << temp.imag << 'i' << endl;
            return temp;}
        }
//��������
int main() {
    Complex *obj;
    obj = new Complex[6];   //��̬����������

    obj[0].input();
    obj[1].input();

    cout << "\n\n����������Ϊ" << endl;
    cout << "a = ";  obj[0].display();
    cout << "b = ";  obj[1].display();

    obj[2]= obj[0] + obj[1];
    obj[3]= obj[0] - obj[1];
    obj[4]= obj[0] * obj[1];
    obj[5]= obj[0] / obj[1];

    return 0;
}
