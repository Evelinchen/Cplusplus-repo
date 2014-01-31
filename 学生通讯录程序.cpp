/*================================Program Description====================================
�������ƣ�ѧ��ͨѶ¼����.cpp
����Ŀ�ģ������洢ѧ�������֡��绰���뼰�����������Ϣ��
Written By Dong-Hong-Yan(2012-5-6)
=========================================================================================*/

#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

//����ѧ����Ϣ��
class Student  {
    public:
        Student( string sName )  {            //�����Ӽ��̶�ȡ������Ϣ
            cout << "\n********���롶" << sName << "����Ϣ********\n";
            this->sName = sName;
            cout << "   ͨ�ŵ�ַ ��";
            cin >> sAddree;
            cout << "   �绰���� : ";
            cin >> sPhone;
            cout << "   �ֻ����� : ";
            cin >> sMobile;
            cout << "   �������� ��";
            cin >> sEmail;
            cout << "\n********���롶" << sName << "�����********\n";
        }
        Student( string sName, string sAddree, string sPhone,
                 string sMobile, string sEmail )      //�������ļ���ȡ������Ϣ
        {
            this->sName = sName;
            this->sAddree = sAddree;
            this->sPhone = sPhone;
            this->sMobile = sMobile;
            this->sEmail = sEmail;
        }
        void Display()  {              //��ʾ����������Ϣ
            cout << "\n********��ʾ��" << sName << "����Ϣ********\n";
            cout << "1�������ǣ�" << sName << endl;
            cout << "2����ַ�ǣ�" << sAddree << endl;
            cout << "3���绰�ǣ�" << sPhone << endl;
            cout << "4���ֻ��ǣ�" << sMobile << endl;
            cout << "5�������ǣ�" << sEmail << endl;
            cout << "\n********��ʾ��" << sName << "�����********\n";
        }
        bool Cmpkey( string str )  {          //�������в����������
            if( sName == str )  return true;
            if( sPhone == str )  return true;
            if( sMobile == str )  return true;
            if( sEmail == str )  return true;

            return false;
        }
        void Modify()  {          //�޸Ľ������
            do  {
                cout << "\n********���޸�ͨѶ¼��Ϣ��********\n";
                cout << "1�������ǣ�" << sName << endl;
                cout << "2����ַ�ǣ�" << sAddree << endl;
                cout << "3���绰�ǣ�" << sPhone << endl;
                cout << "4���ֻ��ǣ�" << sMobile << endl;
                cout << "5�������ǣ�" << sEmail << endl << endl;
                int iChoice;
                cout << "   ѡ��Ҫ�޸���Ŀ�ı�ţ�1-5����" << endl;
                cout << "   �������������˳��޸ģ����룺";
                cin >> iChoice;
                switch( iChoice )  {
                    case 1:
                        cout << "   �����޸ĺ��������";
                        cin >> sName;
                        break;
                    case 2:
                        cout << "   �����޸ĺ�ĵ�ַ��";
                        cin >> sAddree;
                        break;
                    case 3:
                        cout << "   �����޸ĺ�ĵ绰��";
                        cin >> sPhone;
                        break;
                    case 4:
                        cout << "   �����޸ĺ���ֻ���";
                        cin >> sMobile;
                        break;
                    case 5:
                        cout << "   �����޸ĺ�����䣺";
                        cin >> sEmail;
                        break;
                    default:
                        break;
                }
                if( iChoice >= 1 && iChoice <= 5 )  {
                    cout << "   ��Ҫ�����޸�����ѡ����y/n��";
                    char cChoice;
                    cin >> cChoice;
                    if( cChoice == 'y' || cChoice == 'Y')
                        continue;
                    else  {
                        cout << "********���޸�ͨѶ¼��ϡ�********\n";
                        break;
                    }
                }

            } while(1);
        }
        string GetName() {          //���ڷ���˽�г�Ա����sName
            return sName;
        }
        string GetPhone() {         //���ڷ���˽�г�Ա����sPhone
            return sPhone;
        }
        string GetMobile() {        //���ڷ���˽�г�Ա����sMobile
            return sMobile;
        }
        string GetEmail() {         //���ڷ���˽�г�Ա����sEmail
            return sEmail;
        }
    private:
        string sName;             //����
        string sAddree;           //��ַ
        string sPhone;            //�绰
        string sMobile;           //�ֻ�
        string sEmail;            //����
};

int main()  {
    Student stu( "Dong" );
    stu.Display();
    stu.Modify();
    stu.Display();
    return 0;
}
