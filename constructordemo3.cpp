#include <iostream>

using namespace std;

class ppa
{
    public:
       int no1;
       int no2;

       // default constructorg

       ppa()
       {
        cout<<"inside default constructor\n";
       }

       ~ppa()
       {
        cout<<"inside destructor\n";
       }

//parametrized constry


       ppa (int a,int b)




       ppa()
       {
        cout<<"inside default constructor\n";
       }

       ~ppa()
       {
        cout<<"inside destructor\n";
       }

       //copy constructor

       ppa(ppa &obj)
       {

        cout<<"inside copy constructor\n";
       }
       
       
        
       

};

int main()
{

    ppa pobj1;    //default
    ppa pobj2(11,21);   //parametrized
    ppa pobj3(pobj1);  ///copy


    


     return 0;
}