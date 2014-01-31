/*-------------Program Description------------
�������ƣ�Dice_game.cpp
����Ŀ�ģ�ÿ�����Σ���һ�ֺ�Ϊ7��11ʤ����������Ϊ
2��3��12������������Ϊ��������Ϊ�Լ�������ֱ����һ�ֵĺ�
���ڵ�һ�ֵĵ�����ʤ��������7������
Written By Dong-Hong Yan(WANT Studio)
----------------------------------------------*/


#include<iostream>
//��c++�У������õ������������ͷ�ļ�stdlib��һ����ǰ��һ��c����ȻmathҲ��
#include<cstdlib>
#include<cTime>
using namespace std;

//Ͷɫ�ӣ�����������������
int rollDice()  {
	int die1=1+rand()%6;
	int die2=1+rand()%6;
	int sum=die1+die2;
	cout<<"player rolled "<<die1<<"+"<<die2<<"="<<sum<<endl;
	return sum;
}

//����ö������
enum GameStatus{WIN,LOSE,PLAYER};

//������
int main()  {
	int sum,myPoint;
	GameStatus status;

	unsigned seed;
	cout<<"Please enter an unsigned integer:";

	//�������������
	//cin>>seed;

	//������ͨ��ϵͳ��������rand()����ʱȥ��cin>>seed,���#include<cTime>,ֱ��
	//дһ��srand((unsigned)time(NULL)); ���ɣ�ϵͳ������䣬���ò���
	//srand(rand());
    srand((unsigned)time(NULL));
	sum=rollDice();  //��һ��Ͷɫ�ӣ��������
	switch(sum)  {

	//�����Ϊ7��11��״̬ΪWIN
	case 7:
	case 11:
		status=WIN;
		break;

	//�����Ϊ2��3��12Ϊ����״̬ΪLOSE
	case 2:
	case 3:
	case 12:
		status=LOSE;
		break;

		//�����������Ϸ���޽����״̬ΪPLAYER�����µ�����Ϊ��һ����׼��
	default:
		status=PLAYER; //status��״̬��˼
		myPoint=sum;
		cout<<"Point is "<<myPoint<<endl;
		break;
	}

	while(status==PLAYER)  {
		sum=rollDice();
		if(sum==myPoint)
			status=WIN;
		else if(sum==7)
			status=LOSE;
	}


	if(status==WIN)
		cout<<"player wins"<<endl;
	else
		cout<<"Player loses"<<endl;

	return 0;
}
