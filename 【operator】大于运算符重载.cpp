/*==============================Program Description==================================
�������ƣ��������������.cpp
����Ŀ�ģ������Ƚ���������Ĵ�С������ֱ���õ��������������
Written by Dong-Hong-Yan(2012-4-28)
=====================================================================================*/

#include<iostream>
#include<string>
using namespace std;

class Length  {
    public:

        Length( int, int );
        bool operator > ( Length );

    private:

        int iFeet;
        int iInch;
};   //�ֺűز����ٵ�

//�����вι��캯��
Length::Length( int iFeet, int iInch )  {

    this->iFeet = iFeet;
    this->iInch = iInch;
}

//�����ﶨ�庯������Ϊint����Ϊ�����Ͷ�����
bool Length::operator > ( Length N )  {

    cout << "\n�Ƚ����������operator > ()������ " << endl;

    if( iFeet > N.iFeet )

        return true;

    else if( iFeet < N.iFeet )

        return false;

        else if( iInch > N.iInch )

            return true;

            else

                return false;
}

//����������
int main()  {
    Length L1(3, 10);
    Length L2(4, 6);
    if(L1 > L2)
        cout << "����L1 > ����L2" << endl;
    else
        cout << "����L1 < ����L2" << endl;

    return 0;
}
