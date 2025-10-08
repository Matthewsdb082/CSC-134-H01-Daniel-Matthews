//daniel matthews
//9/29/25
// multiple multiplcation table
#include <iostream>
using namespace std;


int main()
{
    //variable
int a =0;
int b=0;
//first loop starts a row
    for( a=1;a<=10;a++)
    {
        // this second loop will multiply the count * first loop row numb to make its plots value.
        for ( b=1;b<=10;b++)
        {
         cout<<a*b<<"\t";
        }
        //ends row
        cout<<endl;
    }


return 0;
}