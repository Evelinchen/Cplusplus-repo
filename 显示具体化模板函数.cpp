#include <iostream>
#include <string>

using namespace std;

const int NUMINT = 6;
const int NUMDOUBLE = 4;
const int NUMPOINT = 5;

template <class T>          //ģ�庯��ԭ��
    T maxn(T * array, int n);
template <class T>
    T maxLength(T * array, int n);        //ģ�庯��ԭ��
template <>  string maxLength<string>(string ch[], int n)

/*
1��ģ�庯����ʾ���廯��������template <>��ͷ���Ա����ǡ�
2����ʾ���廯�����еĺ�����Ӧ��Ϊ�����Ѿ������Ͷ���
  ���ں��棩�˵�ģ�庯���ĺ���������maxLength������
   �ú����������<>��д��Ҫ��ʾ�������ͣ���string  */
{
 string str;
 str = ch[0];
 for(int i = 1; i < n; i++) {
    if(str.length() < ch[i].length())     //�����ַ����ĳ����þ��
        //���������Ӧ�ĺ�������str.length()
        str = ch[i];   //�ַ���֮��������Ѿ������˵�=����ֱ�Ӹ�ֵ
    }
    return str;      //�����ַ���
}

int main() {
    int arrayInt[NUMINT] = {1, 2, 3, 4, 5, 6};
    double arrayDouble[NUMDOUBLE] = {1.1, 2.2, 3.3, 4.4};
    int a;
    double b;
    cout << "arrayInt: " << endl;
    for(int i = 0; i < NUMINT; i++)  {
        cout << arrayInt[i] << " ";
    }
    cout << endl;
    cout << "arrayDouble: " << endl;
    for(int i = 0; i < NUMDOUBLE; i++)  {
        cout << arrayDouble[i] << " ";
    }
    cout << endl;
    a = maxn(arrayInt,NUMINT);      //����ģ�庯��
    b = maxn(arrayDouble,NUMDOUBLE);   //����ģ�庯��
    cout << "a = " << a << " " << "b = " << b << endl;

//�����ַ�������
    string arrayString[NUMPOINT] = {"abc", "defgh", "dfadfasdfaa", "dfas", "aaaaaaaa"};
    for(int k = 0; k < NUMPOINT; k++) {
        cout << "ROW" << k + 1 << " : " << arrayString[k] << endl;
    }

    //�ö�ά�ַ��������洢�ַ�����Ч���ȼ����ַ������飬

    //�������ܵر���ͬʱʹ���ַ�������Ͷ�ά�ַ�����
    char myc[6][6] = {"abc", "123", "456", "78910", "1112"};
    for(int j = 0; j < 6; j++)  {
        cout << "row" << j + 1 << ":   " << myc[j] << endl;
    }

    //������ú���ģ����ʾ���廯�󷵻ص��ַ�����ַ����

    //�ڷ��ص��ַ���ǰ�����ȥ��ַ����&����
    cout << &maxLength(arrayString, NUMPOINT) << endl;

    return 0;
}


template <class T>       //�����������ֵ��ģ�庯��
T maxn(T * array, int n)  {
    T temp;
    temp = array[0];
    for(int i = 1; i < n; i++)  {
        if(temp < array[i])
        temp = array[i];
    }
    return temp;
}

/*���ĵá�
1����ģ�����У����еĺ�����Ϊģ�庯����
2����ģ�����ⶨ��ģ�庯��ʱ����ʽΪ��
   template<class T, int SIZE>
   void Stack<T, SIZE>::getX()  {}
3�������Ҫͬһ���㷨���ڲ�ͬ���͵ĺ���������ģ�壬����Ȼ�������̿�ִ�г���
   ����ʹ���ɶ������������򵥡����ɿ������廯�����ǳ���ģ�壬����ģ�庯��
   �����Ǿ��廯�ͳ���ģ�塣
 ===================================================================================
���磬�㶨����һ������ģ��
template<typename T>
void func(const T& t)
{
    dosomething(t);
}

���ǣ���T��������ʱ���㲻��dosomething��������killsomeone���Ǿ���Ҫ���廯�ˡ�
���廯��2����ʽ��һ������ʽ���廯
������һ���������͵�ʵ��
template<>
void func<int>(const int& t)
{
    killsomeone(t);
}
����������int�����⣬����������Ȼ����dosomething������

��һ�ַ�ʽ��дһ������������ģ��
���磬��������
void func(const int& t)
{
    killsomeone(t);
}
�������ڱ�������ʱ������������ε���ģ�壬�Զ����ö���ĺ�����
*/

