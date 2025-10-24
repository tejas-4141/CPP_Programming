#include<iostream>
using namespace std;


class Demo
{
    float f;
   static int i;
    double d;


    Demo()
    {

    f=0.0f;
    
    d=0.0;

    }

    Demo(float a, double b)
    {
       f=b;
       d=b;

    }

    static void gun()
    {
    cout<<"inside gun is :\n";
    }

     void fun()
    {
    cout<<"inside fun is :\n";
    }

};

int Demo::i=20;

int main()
{
Demo::gun()
cout<<"the value of i is:"<<Demo::i<<"\n";

return 0;






}


