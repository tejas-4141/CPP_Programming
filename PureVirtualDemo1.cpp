#include<iostream>
using namespace std;
class Base
{
    public:
    int i,j;
    int Addition(int a,int b)                    //concrete
    {
        return a+b;
    }
    
    virtual int Subtraction(int a,int b)=0       //Abstract
    

};

class Derived:public Base   //Error
{
    public:
    int x;

     
};
int main()
{
   
    
   
   Base*bp=new Derived();  //upcasting

  


   
    return 0;
}