//_H_TRAPZINT

//������Function�Ķ���
class Function  {
    public:
        virtual double operator () ( double x ) const = 0;
        virtual ~Function() {}
};

//����������Myfunction�Ķ���
class Myfunction : public Function  {
    public:
        virtual double operator () ( double x ) const;   //�����麯��
};

//������Integration�Ķ���
class Integration  {
    public:
        virtual double operator () ( double a, double b, double eps ) const = 0;
        virtual ~Integration() {}
};

//����������Trapz�Ķ���
class Trapz : public Integration  {
    public:
        Trapz( const Function &f ) : f(f) {}   //���캯��
        virtual double operator () ( double a, double b, double eps ) const;
    private:
         //˽�г�ԱFunction�����ָ�룬���ı�ָ��ָ��Ķ�������Ϊ��ָ��
        const Function &f;
};

//�����ͷ�ļ�����Ϊ�麯�������ڶ���ʱ��������д
//����ú���ִ�к󣬲��ı䵱ǰ�����ֵ����ú���������Ϊ������

