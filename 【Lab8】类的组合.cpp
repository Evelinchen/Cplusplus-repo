/*=============================Program Description==========================
�������ƣ�������.cpp
����Ҫ�󣺸�ʽ���£�
            ��������  ��  ��  2012 5 10
            ������ʱ  ��  ��  8 12 12
            �������¼����ŵı��  ��  ��  ��  ʱ  ��  ��
                8 2012 5 16 23 59 59
            c++��ҵ��ʼ��:  2012��5��10��8ʱ12��12��
            C++��ҵ��ֹ��:  Lab8  2012��5��16��  23ʱ59��59��
Written By Dong-Hong-Yan(2012-5-12)
============================================================================*/

#include<iostream>
#include<string>
using namespace std;

class Period  {
    public:
        Period()  {}
        Period( int year, int month, int day ) {
            this->year = year;
            this->month = month;
            this->day = day;
        }
        ~Period()  {}
        void Input()  {

            cin >> year >> month >> day;
        }
        int GetYear()  {return year;}
        int GetMonth()  {return month;}
        int GetDay()  {return day;}
    private:
        int year;
        int month;
        int day;
};

class Time  {
    public:
        Time()  {}
        Time( int hour, int minute, int second ) {
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        ~Time()  {}
        void Input()  {

            cin >> hour >> minute >> second;
        }
        int GetHour()  {return hour;}
        int GetMinute()  {return minute;}
        int GetSecond()  {return second;}
    private:
        int hour;
        int minute;
        int second;
};

class Major  {
    public:
        Major()  {}
        Major( Period period, Time time )  {
            this->period = period;
            this->time = time;
        }
        void Input()  {
            cout << "��������  ��  ��" << endl;
            period.Input();

            year_1 = period.GetYear();
            month_1 = period.GetMonth();
            day_1 = period.GetDay();

            cout << "������ʱ  ��  ��" << endl;
            time.Input();

            hour_1 = time.GetHour();
            minute_1 = time.GetMinute();
            second_1 = time.GetSecond();

            cout << "�������¼����ŵı��  ��  ��  ��  ʱ  ��  ��" << endl;
            cin >> num;period.Input();time.Input();
        }
        void Output()  {
            cout << "\n\nc++��ҵ��ʼ��:  " << year_1 << "��"
                 << month_1 << "��" << day_1 << "��"
                 << hour_1 << "ʱ" << minute_1 << "��"
                 << second_1 << "��" <<endl;
            cout << "C++��ҵ��ֹ��:  Lab" << num << "  "
                 << period.GetYear() << "��" << period.GetMonth() << "��"
                 << period.GetDay() << "��  " << time.GetHour() << "ʱ"
                 << time.GetMinute() << "��" << time.GetSecond() << "��" <<endl;    ;
        }
    private:
        int num;

        int year_1, month_1, day_1;
        int hour_1, minute_1, second_1;

        Period period;
        Time time;
};
int main()  {
   Major major;

   major.Input();
   major.Output();

   return 0;
}
