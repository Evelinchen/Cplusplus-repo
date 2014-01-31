//Calculator.h

#ifndef CALCULATOR_H
#define CALCULATOR_H
#include"Stack.h"             //����ջ��ģ�嶨���ļ�

//�����������
class Calculator  {
    public:
        void run();           //�������������
        void clear();         //��ղ�����ջ
    private:
        Stack<double>s;                           //������ջ
        void enter( double num );                 //��������numѹ��ջ

        //��������������������ջ������opnd1��opnd2��
        bool getTwoOperands( double &opnd1, double &opnd2 );
        void compute( char op );           //ִ���ɲ�����opָ��������
};

#endif                         //CALCULATOR_H
