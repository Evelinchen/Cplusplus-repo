/*==============================Program Description==================================
�������ƣ�Ӣ�����_�Ӻ����������.cpp
����Ŀ�ģ�����Ӣ�Ƴߴ���ӣ�1Ӣ��=12Ӣ�磩������ʱ����ӣ�1Сʱ=60�֣�1��=60�룩
          ���������ơ��˽��ƺ�ʮ����������ӣ���ʱ��Ӧ�ô�����Ӧ���࣬Ȼ������
          �Ӻ��������ʹ�����������ӣ�
Written by Dong-Hong-Yan(2012-4-28)
=====================================================================================*/

#include<iostream>
#include<string>   //����ͷ�ļ�
using namespace std;

//����һ����Length
class Length  {
    public:
        Length();                       //�����޲ι��캯��
        Length( int , int );            //�����вι��캯��
        Length operator + ( Length );     //�����Ӻ������������ֻ���β�����
        void display( string );           //������ʾӢ�Ƴ��Ⱥ�����ֻ���β�����
    private:            //˽������
        int iFeet;
        int iInch;
};

Length::Length()  {
    iFeet = 0;
    iInch = 0;
}

Length::Length(int iFt, int iIh) :iFeet(iFt), iInch(iIh) {
    cout << " Calling the default constructor! " << endl;
}

//�����Ӻ����������,����ֵ���ͻ�ΪLength�ͣ��������������Ϊ��Ա����
Length Length::operator + (Length L)  {

    cout << "\n�Ӻ����������operator+()������ " << endl;

    Length Temp;

    Temp.iFeet = this->iFeet + L.iFeet;
    Temp.iInch = this->iInch + L.iInch;

    while( Temp.iInch >= 12)        //����Ϊ12
    {
        Temp.iInch -= 12;
        Temp.iFeet++;
    }

    return Temp;

}

//������ʾӢ�Ƴ��Ⱥ���
void Length::display( string s)  {
    cout << s <<" = " << iFeet << "\'" << iInch << "\'" << endl;
}

//����������
int main()  {
    Length L1(3, 10);      //���������L1�������вι��캯��
    Length L2(4, 6);       //���������L2�������вι��캯��

    cout << "\n����operator+()���������ǰ " << endl;

    L1.display("L1");
    L2.display("L2");

    Length L3;
    L3 = L1 + L2;          //�ȼ���L1.operator + (L2)

    cout << "\n����operator+()����������� " << endl;
    L3.display("L3");      //������ʾӢ�Ƴ��Ⱥ���

    return 0;
}

/*���ĵá�
   ���ø�ʽ��Obj1<�����>Obj2

<�����>��ָʾ��Ԫ������ķ��š�c++����Ϊ��
    Obj1.operator <�����>(Obj2);����Ա�������أ� ��
    operator<�����>��Obj1, Obj2��;(ȫ�ֺ�������)
�������������У��ڶ�������������Ϊ���������Խ�����������������ڲ��ĺ���
*/
