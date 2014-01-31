/*===================================================Program Description======================================================
�������ƣ�����Ԫ��ͼ�����ϵͳ .cpp
����Ŀ�ģ�����Ԫʵ��һ���򵥵�ͼ�����ϵͳ����д����ʵ�ִӼ�������4��ͼ����Ϣ��Ȼ����ʾ�������4��ͼ����Ϣ���Ƚ�ͼ��ļ۸�,
          �������ͼ�������˵�ͼ�飻�Ӽ�������༭������Ҫ�޸�ͼ��ı�ţ�4����ı��Ĭ��Ϊ0��1��2��3����ͼ��༭�޸�ͼ���
          �۸�Ϊ�������ֵ��

����Ҫ��1.���ȶ���һ��ͼ���ࡣͼ����������ͼ۸���Ϣ����Щ��ϢҪ��Ӽ������롣
          2.����ͼ��༭�ࡣͼ��༭�����༭������Ϣ�����ҿ��Ե���ͼ��۸���Ϣ��
          3.����ʹ����Ԫ��������Ԫ����ʵ�֡�
���������ʽ:
������4�������Ϣ             ||                   ������Ŀ��Ϣ��
����        �۸�              ||                    0    ��aa��    40
aa 40                         ||                    1    ��bb��    41
bb 41                         ||                    2    ��cc��    42
cc 42                         ||                    3    ��dd��    43
dd 43
��������----    ��������dd��  �۸�43
����˵�����--    ��������aa��  �۸�40
������༭����:wang
�������ñ༭�޸ļ۸����Ŀ���:0
������ ��aa�� ���¼۸�:41
�༭ wang �� ��aa���ļ۸��Ѿ�����Ϊ��41
Written By Dong-Hong-Yan (2012-4-12)
==============================================================================================================================*/

#include<iostream>
using namespace std;

const int NUM = 4;

//��ͼ������ࡿ
class BookManageSystem  {
      public:
             BookManageSystem(int bookPrice = 0): bookPrice(bookPrice) { }             //���캯��
                                                          //��Ϊ���ַ���������'\0'���ʼӡ�1��
                                                                                                  //strlen����������ǲ�����'\0'�ĳ���
             BookManageSystem(BookManageSystem &p);

             void input();
             void output();

             friend void Compare_MaxPrice();
             friend void Compare_MinPrice();
             friend void Alter();                                                 //��Ԫ����������
      private:
              char bookName[20];
              int bookPrice;

      } book[4];              //ֱ�ӳ�ʼ��������

//����i���캯���Ķ���
BookManageSystem::BookManageSystem(BookManageSystem &p)  {

                    bookPrice=p.bookPrice;
                    }
//����������Ϣ���뺯��
void BookManageSystem::input()  {
          cin>>bookName>>bookPrice;
     }

//����������Ϣ�������
void BookManageSystem::output()  {

     cout<<"   ��"<<bookName<<"��    "<<bookPrice<<endl;
     }

//�����������˵�����Ϣ
void Compare_MaxPrice()  {
    int k = 0;
    for(int i = 0; i < NUM; i++)  {
          if(book[i].bookPrice > book[k].bookPrice)  {
                               k = i;
                               }
           }
    cout<<"��������----    "<<"��������"<<book[k].bookName<<"��  �۸�"<<book[k].bookPrice<<endl;
    }

//�����������˵�����Ϣ
void Compare_MinPrice()  {
    int k = 0;
    for(int i = 0; i < NUM; i++)  {
          if(book[i].bookPrice < book[k].bookPrice)
                               k = i;
           }
    cout<<"����˵�����--    "<<"��������"<<book[k].bookName<<"��  �۸�"<<book[k].bookPrice<<endl;
    }

void Alter()  {
     char manName[10];
     int price;
     int number;

     cout<<"\n\n������༭����"<<endl;
     cin>>manName;

     cout<<"�������ñ༭�޸ļ۸����Ŀ���"<<endl;
     cin>>number;

     cout<<"������ ��"<<book[number].bookName<<"�� ���¼۸�"<<endl;
     cin>>price;

     cout<<"�༭ "<<manName<<" �� ��"<<book[number].bookName<<"���ļ۸��Ѿ�����Ϊ��" <<price<<endl;
     }

//��������
int main()  {
    int i;
    cout<<"������4�������Ϣ"<<endl<<"����        �۸�"<<endl;

    for(i = 0; i < NUM; i++)  {
            book[i].input();
            }
    cout<<"\n\n������Ŀ��Ϣ��"<<endl;
    for(i = 0; i < NUM; i++)  {
            cout<<i<<" ";
            book[i].output();
            }

    Compare_MaxPrice();
    Compare_MinPrice();

    Alter();

    return 0;
    }

