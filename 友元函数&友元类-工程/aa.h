#include<iostream>
using namespace std;

#ifndef _HEAD_H       //�������ַ�����һ�¼��ɣ�����Ҫ�̶���ĳЩ
#define _HEAD_H

class X;            //ǰ����������

class Y  {
	public:
		int g( X &p);     //��int g( X &p);�������������д���棬��ô��Xû����������
};                        //���Խ����������������棬����д����X�����������



class X  {
	public:
		X( int i ) {
			this->i = i;
		}
		friend class Z;
		friend int h( X &p);
		friend int Y::g( X &p);       //���������һ�����У����Ա����Ϊ��һ��
    private:                          //�����Ԫ����ʱͨ��������::����������������
		int i;
};

//����һ����ĳ�Ա����������Ԫ���˽�г�Ա������ͨ����Ķ�����з���

int Y::g( X &p )  { return p.i + 1; }

class Z  {
	public:
		int f( X &p)  { return p.i + 5; }
};

int h( X &p)  {
	return p.i + 10;
}

#endif
