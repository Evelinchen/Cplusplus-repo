#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;


struct Fraction
{
    int nume;  //����
    int deno;  //��ĸ

//��Ԫ�����������
  /*  friend istream &operator>>( istream &in, const Fraction &frac )
    {
      char op;
        in >>nume >>op >>deno;   //�������
    }

    friend ostream &operator<<( ostream &out, const Fraction &frac )
    {
        out <<nume <<"/" <<deno;  //�������
    }*/

    void GetFraction( )    //���뺯��
    {
      char op;
      scanf("%d%c%d", &nume, &op , &deno);
     // cin >>nume >>op >>deno;
    }

    void PutFraction( )   //�������
    {
      if( deno % nume )
        cout <<nume <<"/" <<deno <<endl;
       // printf("%d/%d\n",nume,deno);
      else
        cout <<deno/nume <<endl;
       // printf("%d\n",deno%nume);
    }


    void Simply( )
    {
      int temp, m, n;
      if( deno < nume )
      {
        n = deno;
        m = nume;
      }
      else
      {
        m= deno;   //��ĸ
        n = nume;   //����
      }
      while( temp = m%n )
      {
        //temp = m%n;
        m = n;
        n = temp;
      }   //���Լ����n

      deno /= n;
      nume /= n;
     // cout <<nume <<endl;
     // cout <<deno <<endl;
      //cout <<n<<endl;    /////////////
    }

    Fraction operator+( const Fraction &frac )
    {                /*this*/
      Fraction newF;
        newF.deno = deno * frac.deno;      //����ķ�ĸ
        newF.nume = nume * frac.deno + frac.nume*deno;
       // cout <<newF.deno <<endl;   //���Թ���
       // cout <<newF.nume <<endl;   //���Թ���
        newF.Simply( );         //����÷���

        return newF;
    }

    Fraction operator-( const Fraction &frac )
    {
      Fraction newF;
        newF.deno = deno * frac.deno;
        newF.nume = nume*frac.deno - frac.nume*deno;

        newF.Simply( );         //����÷���

        return newF;
    }
};




//������
int main( )
{
    //cout <<"-------������Ӽ�-------" <<endl <<endl;  //��������ʾ

  char op, reply;
  Fraction frac1, frac2, frac;
  int count = 0;
    while( 1 )
    {
      frac1.GetFraction( );
      scanf("%c",&op);
      frac2.GetFraction( );
      scanf("%c",&reply);
      if( frac1.deno == 0 || frac2.deno == 0 )
      {
        printf("Case %d:\n", ++count);
        printf("FALSE\n");
      //  return 1;
      }
      else
      {


        switch( op )
        {
          case '+': frac = frac1+frac2; break;
          case '-': frac = frac1-frac2; break;
        }
        printf("Case %d:\n", ++count);
        frac.PutFraction( );  //������
      }
    }


}
