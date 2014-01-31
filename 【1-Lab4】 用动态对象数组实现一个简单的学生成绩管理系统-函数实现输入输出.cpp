//��Ҫ������� Lab4 �ö�̬��������ʵ��һ���򵥵�ѧ���ɼ�����ϵͳ

//���ܣ�
//�ö�̬��������ʵ��һ���򵥵�ѧ���ɼ�����ϵͳ��
//����һ��ѧ����.
//����-ѧ��-�Ա�-���Ź��Σ�Math��English��C��Computer����ƽ���ֵ�˽�����ݳ�Ա��
//�ø�ѧ���ඨ��ѧ������-ѧ����Ϣ�ɼ������룻
//���ÿ��ѧ����ƽ���֣�Ȼ����ʾÿ��ѧ����������ѧ�š����ſγɼ���ƽ���֡�
//Ҫ��
//    1. �ö�̬��������ʵ�֣�
//    2. ѧ�������Ķ���Ϊ��char *name��
//    3. �ù��캯��ʵ��ѧ����Ϣ�ĳ�ʼ����
//    4. ƽ���ֵļ���Ҫ��һ�������ĺ���ʵ�֣�
//    5. ���ϸ�������ĸ�ʽ�������������



#include <iostream>          //����ͷ�ļ�isotream
#include <iomanip>          //����ͷ�ļ�iomanip������ʹ��setw()����������
#include <cstring>
#include <cstdlib>




using namespace std;   //ʹ��������str���������ı�׼�����������

class MyStudent
{
      
  public  : 

    MyStudent( );
    
	MyStudent( char *na, int id, char gen, double ma = -1, double eng = -1, double c = -1, double com = -1 );  

	MyStudent( const MyStudent &student );     

    ~MyStudent( )              
    {
       delete[] name;            
    }



    void CountAverager( );  

    void InStudent( );   

	void OutStudent( );  


  private :  
    char *name;      //����
    int idnum;       //xue
	char gender;     //�Ա�
    double math;     //��ѧ�ɼ�
	double english;  //Ӣ��
	double cscore;   //C���Գɼ�
	double computer; //������ɼ�
	double averager; //ƽ����
};



MyStudent::MyStudent( )
{
}

MyStudent::	MyStudent( char *na, int id, char gen, double ma/*=-1*/, double eng/*=-1*/, double c/*=-1*/, double com/*=-1*/ ) 
{
    name = new char[strlen(na)+1];   //�������� 
    strcpy( name, na );                    //��������
    idnum = id;                            //ѧ��
    gender = gen;                          //�Ա�
    math = ma;                             //��ѧ�ɼ� 
    english = eng;                         //Ӣ��ɼ�
    cscore = c;                            //C���Գɼ�
    computer = com;                        //������ɼ�        
}

MyStudent::MyStudent( const MyStudent &student )
{
    name = new char[10];    //���ٵ�Ԫ                  
    strcpy( name, student.name );
    idnum = student.idnum;
	gender = student.gender;
	math = student.math;
	english = student.english;
	cscore = student.cscore;
	computer = student.computer;
    averager = student.averager;
   // delete[] name;
}

void MyStudent::CountAverager( )    
{
    averager = (math+english+cscore+computer)/4;
}

void MyStudent::InStudent( ) 
{
    name = new char[10];     
    cin >>name;
    cin >>idnum;
    cin >>gender;
    cin >>math;
    cin >>english;
    cin >>cscore;
    cin >>computer;   
}

void MyStudent::OutStudent( )         
{
    cout <<name <<"  ";       //���ѧ������
    cout <<idnum <<"  ";      //���ѧ��ѧ��
    cout <<gender <<"  ";     //���ѧ���Ա�
    cout <<math <<"  ";       //���ѧ����ѧ�ɼ�
    cout <<english <<"  ";    //���ѧ��Ӣ��ɼ�
    cout <<cscore <<"  ";     //���ѧ��C���Գɼ�
    cout <<computer <<"  ";   //���ѧ��������ɼ�
    cout <<averager <<endl;          //���ѧ��ƽ����
}




//������
int main()
{

	int length;
	cout <<"Please Input the Number of Students:" <<endl;  
    cin >>length;   //����ѧ����Ŀ

  MyStudent *stu = new MyStudent[length];  //�������鵥Ԫ

    cout <<"Please input " <<length <<" student info: Name  ID  Sex  Math  English  C  Computer" <<endl;
    for( int i = 0; i < length; i++ )   //ѭ��ʵ������ 
    {
  	  stu[i].InStudent();  
      stu[i].CountAverager( );   //����ƽ����			
    }
    cout <<endl;    //ִ��һ�λ��� 
    
    cout <<"Student Information you input:" <<endl;    //�����Ϣ��ʾ
    cout <<"Name  ID  Sex  Math  English  C  Computer  Average" <<endl;//��ͷ 	
	for( int i = 0; i < length; i++ )
	{
	  stu[i].OutStudent();
	}
    delete[] stu;
    
   // system("pause");
    return 0;
} 






