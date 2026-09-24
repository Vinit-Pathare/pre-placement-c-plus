#include <iostream>

using namespace std;

class ppa
{
    public:
       int no1;
       int no2;

       // default constructor

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
       
       
        
       

};

int main()
{

    ppa pobj1;
    ppa pobj2(11,21);


    


     return 0;
}