#include<iostream>
//#include<string>
using namespace std;

int main()
{
	string user_name;
	cout<<"Please enter your first name:";
	cin>>user_name;


	//������'\n'û����˫�������������������Ƿ������õģ����У���ȻҲ����endl;
	cout<<'\n'<<"Hello,"<<user_name<<"...and goodbye!\n";

	return 0;
}