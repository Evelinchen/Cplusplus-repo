#include<iostream>
using namespace std;

//�����ⲿ������bool���ͣ�����true��false
extern bool fibon_elem (int pos,int &elem)  {

	//�����������ʽ���򷵻�false
	if(pos<=0||pos>1024)
	{
		elem=0;
		return false;
	}

	elem=1;
	int n_1=1,n_2=1;
	//���м������
	for(int ix=3;ix<=pos;ix++)
	{
		elem=n_1+n_2;
		n_2=n_1;
		n_1=elem;
	}
	return true;
};

//������  
int main()  {

	//�������pos����ѡ������Ԫ�ص�λ�ã�elem�Ǹ�λ����ֵ�Ĵ�С
	int pos,elem;
	//�������ch����ѡ���Ƿ����ѭ��������ȥ
	char ch;
	//����bool�ͱ�������Ϊѭ������
	bool more=true;


	while(more)  {
		cout<<"Please enter a position:";
		cin>>pos;

		if(fibon_elem(pos,elem))
			cout<<"Element # "<<pos<<" is "<<elem<<endl;
		else
			cout<<"Sorry,Could not calculate element # "<<pos<<endl;

		//���¸�more��ֵ���ж�ѭ������
		cout<<"Would you like to try again?(y/n)";
		cin>>ch;
		if(ch!='y'&&ch!='Y')
			//��������㣬�����false
			more=false;
	}
	return 0;
}