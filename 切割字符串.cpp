#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string  str;
    cout << "������һ���ַ�����";
    getline(cin, str, '\n');

    char *p;
    char * buffer = &str[0];
    char *delims  = " ";
    p = strtok(buffer, delims);                     //��������и��ַ�������char *strtok(char *s, char * delims)
                                                    //ǰ��Ϊĸ��������Ϊ�и�Ľ��ޣ�pΪ����ֵ�����Ҫ�ƿ�
    while(p != NULL)
    {
        cout << p << endl;
        p = strtok(NULL, delims);
    }
    /*string  x, y, z;
    int     i = 0;

    cin >>  str;
        while(str[i++] != ' ')
            x += str[i];
        while(str[i++] == ' ')
            continue;
        while(str[i++] != ' ')
            y += str[i];
        while(str[i++] != ' ')
            continue;
        while(str[i++] != ' ')
            z += str[i];
        while(str[i++] == '\0')
            break;

        cout << x << endl
             << y << endl
             << z << endl;*/

    return 0;
}
