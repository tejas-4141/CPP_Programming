#include<iostream>
using namespace std;
class Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"inside base fun\n";
    }

     void gun()
    {
        cout<<"inside base gun\n";
    }

     void sun()
    {
        cout<<"inside base sun\n";
    }

     void bun()
    {
        cout<<"inside base bun\n";
    }

};

class Derived:public Base
{
    public:
    int x;

     void gun()
    {
        cout<<"inside Derived gun\n";
    }

    void sun()
    {
        cout<<"inside Derived sun\n";
    }

    void run()
    {
        cout<<"inside Derived run\n";
    }

    void mun()
    {
        cout<<"inside Derived mun\n";
    }

};
int main()
{
   Base*bp1=new Base();      //NoCasting
   Derived*dp1=new Derived();   //Nocasting
   Base*bp2=new Derived();  //upcasting
   Derived*dp2=new Base();  //Downcasting    //Error

    return 0;
}