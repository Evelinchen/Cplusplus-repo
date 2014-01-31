/*==================================Program Description================================
�������ƣ���string�����������.cpp
����Ŀ�ģ�����char * ���һ���ַ�����MyString�����Ҿ��й��캯�����������������ƹ��캯����
          ���������"+","=","+=","[]",����������������֮���������Ҫ��
Written By Dong-Hong-Yan��2012-5-7��
=======================================================================================*/

#include <iostream>
#include <string>
using namespace std;

class my
{
public:
    my(){}
    my(const char * s){str=s;}
    my(const my & s){str=s.str;}
    my(const string & s){str=s;}
    my operator =(const my & s){this->str=s.str;return * this;}
    char operator [](int index) const{return str[index];}
    bool operator ==(const my & s){return s.str==str;}
    bool operator !=(const my & s){return s.str!=str;}
    bool operator <(const my & s){return str<s.str;}
    bool operator >(const my & s){return str>s.str;}
    string operator += (const my & b){return (str = str + b.str );}

private:
    string str;
};

int main()
{
 my a="abc",b;
 b="def";
 cout<< a + b <<endl;
 cout<<a[2]<<endl;
 my c;
 a+=b;
 cout << a << endl;
 return 0;
}

















