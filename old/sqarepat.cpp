// daniel matthews
//10/04/25
//* builds a sqaure of *
#include <iostream>
using namespace std;


int main()
{
//variables
int in=0;
int a =0;
int b=0;
//inputs the sqaure size u want
cout<<"input how big of a star sqare u want"<<endl;
cin>>in;
// loops how many rows inputted
    for( a=1;a<=in;a++)
    {
        
        //prints the row of * based on input
        for ( b=1;b<=in;b++)
        {
         cout<<"*";
        }
        //end row
        cout<<endl;

    }


return 0;
}