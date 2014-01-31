#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include"date.h"
#include"accumulator.h"
#include<string>
#include<map>

class Account;
class AccountRecord  {
    private:
        Date date;
        const Account * count;
        double amount;
        double balance;
        std::string desc;
    public:
        AccountRecord(const Date &date, const Account * count, double amount,
                      double balance, const std::string &desc);
        void show() const;
};

//���������洢�˱���¼�Ķ���ӳ������
typedef
