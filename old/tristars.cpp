//daniel matthews
//10/4/25
// builds triangle of *
#include <iostream>
using namespace std;


int main()
{
//variable
int in=0;
int a =0;
int b=0;
//input how many rows
cout<<"input how many stars u want to count to"<<endl;
cin>>in;
//loops for how many rows asked for by user.
    for( a=1;a<=in;a++)
    {
        //compares row to how many stars it will need to print
        for ( b=1;b<=a;b++)
        {
         cout<<"*";
        }
        cout<<endl;

    }


return 0;
}