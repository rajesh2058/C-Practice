/*  C++ Program To Calculate Simple Interest using class  */

#include<iostream>
using namespace std;

class bank
{
 private:
     float p;
     float r;
     float t;
     float si;
     float amount;

 public:
    void read ( )
          {
                 cout <<" Enter Principle Amount :: ";
                 cin>>p ;
                 cout<<"\n Enter Rate of Interest :: ";
                 cin>>r;
                 cout <<"\n Enter Number of years :: ";
                 cin>>t;

                 si= (p *r*t) /100;

          }

    void show( )
         {
                
                cout <<"\n\n Interest : "<<si;
         }
};


int main ()
{
    bank b ;

    b.read ( );
    b.show ( );

}