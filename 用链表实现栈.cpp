/*=========================Program Description================================
��������:������ʵ��ջ.cpp
����Ŀ��:ջ���������������ʵ�֣�ʹ������ʵ��ջ����һ�ֺð취����Ϊ����ҪԤ��
         ������Ĵ�С����������ջ�ǿ�ȡ�ģ��������ڶ�̬�����ԭ��
Written By Dong-Hong-Yan(2012-4-30)
==============================================================================*/

#include<iostream>
#include<string>

using namespace std;

class Information  {
    public:
        Information( string sInfoName )  {             //�Ӽ��̶�ȡ������Ϣ
            this->sInfoName = sInfoName;
            cout << "\n   �������� : ";
            cin >> sData;
        }
        string Disp_info()  {                         //��ʾ���������Ϣ
            return sData;
            }
    private:
        string sInfoName;
        string sData;         //����
};

class Node  {
    public:
        Node * NEXT;           //ָ����һ�����Ľڵ�ָ�루information��
        Node( string sNodeName, Node * NEXT = NULL ): INFO( sNodeName )  {
            this->sNodeName = sNodeName;
            this->NEXT = NEXT;
        }
        string Disp_Node()  {
            cout << "\n   ";
            return sNodeName;
        }
    private:
        string sNodeName;              //����ʾ����
        Information INFO;              //�ڵ�������Ϣ
};

class Stack  {                         //����һ��Stack��
    public:
        Stack()  {              //���캯��
            TOP = NULL;
        }
        ~Stack()  {             //��������
            while ( TOP != NULL )  {
                TOP = TOP->NEXT;
                delete TOP;
            }
        }
        void Push( string str ); //���ӽ��
        void Pop();              //ɾ����ǰ�ڵ�
        void Traverse();
    private:
        Node * TOP;                  //ջ��
};

void Stack::Push( string str )  {     //���ӽ�㵽ջ��
    Node * n = new Node( str );
    if( TOP == NULL )  {              //����ջ�ĵ�һ�����
        n->NEXT = NULL;
        TOP = n;
        return ;             //�������أ���������ִ��
    }
    else {
        n->NEXT = TOP;
        TOP == n;
    }
}

void Stack::Pop() {          //ɾ��ջ�����
    if( TOP == NULL ) {
        cout << "\n  ջ�����ڣ�����  " << endl;
        return ;
    }
    Node * TEMP;
    TEMP = TOP;
    TOP = TOP->NEXT;
    delete TEMP;
}

void Stack::Traverse()  {    //����ջ��������нڵ���Ϣ��
    if( TOP == NULL )  {
        cout << "\n   ջ�����ڣ����� " << endl;
    }
    else {
        Node * TEMP;
                            //ѭ����ʾ���нڵ���Ϣ
        for( TEMP = TOP; TEMP != NULL; TEMP = TEMP->NEXT )  {
            cout << TEMP->Disp_Node() << endl; //��ʾ�ڵ��ʾ
        }
    }
}

//����������
int main()  {
    Stack stObj;
    string data;
    cout << " \n\n**********************��ջ������********************* " <<endl;
    char cCmd;
    do {
        cout << "\n   ����(A)  Ĩȥ(D)  ���(T)  �˳�(E):";
        cin >> cCmd;
        switch( cCmd )  {
            case 'A' :
            case 'a' :
                {
                    cout << "\n   �������� ��";
                    cin >> data;
                    stObj.Push( data );
                    break;
                }
            case 'D' :
            case 'd' :
                {
                    stObj.Pop();
                    break;
                }
            case 'T' :
            case 't' :
                {
                    stObj.Traverse();
                    break;
                }
            case 'E' :
            case 'e' :
                {
                    cout << " \n**********************��������ϡ�********************* ";
                    break;
                }
            default:
                cout << "\n    �����������ѡ��˵� ��";
        }
    }
    while ( cCmd != 'E' && cCmd != 'e' );
    return 0;
}















