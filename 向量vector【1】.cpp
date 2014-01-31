/*============================Program Description===================================
�������ƣ��������÷���vector��.cpp
����Ŀ�ģ��ʴ�ķ�ʽ��ͨ��6�ֲ�ͬ�����У�֪��ǰ2�����֣��µ�3�����ش�ʧ�ܣ�������ͬ
          ��ο��
Writeen By Dong-Hong-Yan(2012-4-21)
====================================================================================*/

#include<iostream>
#include<vector>    //�õ�vector���������ͷ�ļ�#include<vector>
#include<string>
#include<cTime>
#include<cstdlib>
using namespace std;

const int seq_cnt = 6;             //����������������Ϊ6
const int seq_size = 18;           //�����������鳤��Ϊ18

//�����أ��Ƕ���һ������ֵΪ�ַ���ָ��ģ���������������int num_triesΪ�β�
 const char * msg_to_user( int num_tries )  {
      const int rap_cnt = 5;       //���岻ͬ�𰸻ظ�����5��

    //��̬�������ַ�ָ�룬ָ������ָ��const int * p=&a;ָ�����͵ĳ���int * const p=&a;
      static const char * user_msgs[ rap_cnt ] = {
        "Go on, make a guess.\n","Oops! Nice guess but not quite it.\n",
        "Hmm. Sorry. Wrong again!\n", "Ah, this is harder than it looks ,no ? \n",
        "It must be getting pretty frustrating by now ! \n"
         };
      if( num_tries < 0)
         num_tries = 0;
      else
         if( num_tries >= rap_cnt )
            num_tries = rap_cnt - 1;
    return user_msgs[ num_tries ];
    }
//����������
int main()  {

    int num_tries;
    int seq_index;                     //�����������ֵ�������ͨ���������ѡ��ڼ�����
    int user_guss;                     //�����û��µ���ֵ
    int cur_tuple = 0;                 //����ʾ֮Ԫ�ص�����ֵ
   // int elem_seq[seq_size];
    int elem_vals[ seq_size ] = { 1, 2, 3,         //Fibonacci
                    3, 4, 7,         //Lucas
                    2, 5, 12,        //Pell
                    3, 6, 10,        //Triangular
                    4, 9, 16,        //Square
                    5, 12, 22         //Pentagonal
                    };
    string seq_names[seq_cnt] = {
    "fibonacci",
    "lucas",
    "pell",
    "triangular",
    "square",
    "pentagonal"
    };
    //������elem_vals��ʼ��vector���͵�elem_seq
    vector<int>elem_seq(elem_vals, elem_vals+seq_size);

  /*  vector<int> seq_addrs[ seq_cnt ] = { &seq_names[0], &seq_names[1],
    &seq_names[2], &seq_names[3], &seq_names[4], &seq_names[5]
                    };
*/

       srand(( unsigned )time( NULL ));     //ʹ��ϵͳ�������������
       seq_index = rand() % seq_cnt;
       cur_tuple = seq_index;
        static int count = 0;

    while(  cur_tuple < seq_size && count <6 )  {
      static int num_tries = 0;

       cout << "The first two elements of the sequence are: "
            << elem_vals[ 3 * cur_tuple ] << ","
            << elem_vals[ 3 * cur_tuple + 1 ]
            << "\nWhat is the next element ? ";

       cin >> user_guss;
       if(user_guss == elem_vals[ 3 * cur_tuple + 2 ])  {

          cout << "Very good.Yes! " << elem_vals[ cur_tuple + 2]
               << " is the next element in the " << seq_names[ cur_tuple / 3]
               << " sequence.\n" << endl;

         }
       else  {

          const char * receive = msg_to_user(num_tries);
          cout << receive << endl;
          ++num_tries;
        }

        count++;

       srand(( unsigned )time( NULL ));      //ʹ��seed��Ϊ�������������
       seq_index = rand() % seq_cnt;
       cur_tuple = seq_index;

    }

    return 0;
}

