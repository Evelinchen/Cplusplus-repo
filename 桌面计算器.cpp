typedef double Stack_entry;
#include"stack"
#include<iostream>
using namespace std;

/*
* * *�û�����
   Ϊ��ʵ��get_command,���Ǿ������ַ�����=��+��-��*��/��ʾ�û��ܼ��������˴���
   Ҫ���û�������ֵ��=������������ʣ��ķ��ŷֱ��ʾ�Ӽ��˳���*/

char get_command()  {
char command;
bool waitting = true;
cout << "Select command and press<enter>:";
while(waitting)  {
command = tolower(command);
if(command == '?' || command == '=' || command == '+' || command == '-'
   || command == '*' || command == '/' || command == 'q')
   waitting = false;
else {
    cout << "Please enter a valid(��Ч) command:" << endl
         << "[?]push to stack=[=]print top" << endl
         << "[+] [-] [*] [/] are arithmetic operations " << endl
         << "[Q]uit." << endl;
    }
}
    return command;
}

/*
* * *ִ���û�����
    ���ѡ���ִ���û�����Ĺ����Ǻ���do_command�������������Ǹ�����
    do_command�����ļ�Ҫ��ʽ�����н�����������Ҫѡ������������һЩ���ܵ�����*/

bool do_command(char command, Stack_entry &numbers) {
    /*Pre:The first parameter�������� specifies��ָ���� a valid calculator����������
          command.
      Post:The command  specifies by the first parameter has been applied to the
          Stack of numbers given by the second parameter.A result of true is
          returned unless command == 'q'.
      Uses:The class Stack.*/


        double p, q;
        switch(command)  {
        case '?':
            cout << "Enter a real number: "<< flush;
            cin >> p;
            if(numbers.push(p) == overflow)
                cout << "Warning:Stack full, lost" << endl;
            break;
        case '=':
            if(numbers.top(p) == underflow)
                cout << "Stack empty" << endl;
            else
                cout << p << endl;
                break;
        case '+':
            if(numbers.top.(p) == underflow)
                cout << "Stack empty" <<endl;
            else  {
                numbers.pop();
                if(numbers.top(q) == underflow) {
                    cout << "Stack has just one empty." << endl;
                    numbers.push(p);
                }
                else  {
                    numbers.pop();
                    if(numbers.push(p + q) == overflow)
                    cout << "Warning :Stack full, lost result!" << endl;
                }
            }
                break;
        //Add options for further user commands.
        case 'q':
            cout << "Calculation finished.\n";
            return false;
        }
        return true;

    }

//��������
int main()  {
    /*Post:The program has executed(ִ��) simple arithmetic(����) commands emtered by the user.
      Uses:The class Stack and the functions introduction,instructions,do_command
      and ,andget command.*/

Stack_entry stored_numbers;
//introduction();
//instructions();

while(do_command(get_command(), stored_numbers));

return 0;
}

