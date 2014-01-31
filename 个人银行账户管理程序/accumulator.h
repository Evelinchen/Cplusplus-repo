#ifnedf _ACCUMULATOR_H
#define _ACCUMULATOR_H

#include"date.h"

class Accumulator {            //��ĳ����ֵ�����ۼ�
    private:
        Date lastDate;            //�ϴα����ֵ������
        double value;             //��ֵ�ĵ�ǰֵ
        double sum;               //��ֵ�����ۼ�֮��
    public:
        //���캯��dateΪ��ʼ�ۼӵ����ڣ� valueΪ��ʼֵ
        Accumulator(const Date &date, double value)
            :lastDate(Date), value(value), sum(0) {}

        //������ڵ��ۼӽ��
        double getSum(const Date &date) const {
            return sum + value * date.distance(lastDate);
        }
        double getSum(const Date &date) {
            return sum + value * (date - lastDate);
        }

        //��date����ֵ��Ϊvalue
        void change(const Date &date, double value) {
            sum = getSum(date);
            lastDate = date;
            this->value = value;
        }

        //��ʼ���������ڱ�Ϊdate,��ֵ��Ϊvalue���ۼ�������
        void reset(const Date &date, double value) {
            lastDate = date;
            this->value = value;
        }
};

#endif                              //_ACCUMULATOR_H
