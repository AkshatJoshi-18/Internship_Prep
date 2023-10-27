#include<iostream>
using namespace std ;

class test
{
    private:
    int a ,b ;
    public:
    test(int q,int w)
    {
        a = q;
        b = w;
        
    }
    
    test(test &ref)
    {
        a = ref.a;
        b= ref.b;
    }

    void show()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }

    ~test()
    {
        cout<<"destructed the constroctor"<<endl;
    }
};

int main() {
   test obj1(10,20);
   test obj2(30,40);
   obj1.show();
    obj2.show();

    return 0;
}