#include<iostream>
using namespace std ;

class emp
{
    private :
        int a, b, c ;
    public :
        int d , e;
    void setdata(int a1, int b1, int c1); // Declaration of function
        
    void getdata()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;

    }
};

void emp :: setdata(int a1, int b1, int c1) // :: is scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    emp harry;
    harry.setdata(4,5,6);
    harry.d = 10;
    harry.e = 20;
    harry.getdata();
    return 0;
}
