//daniel matthews
//9/11/25
// leap year yes no
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //prompt / info in
    int year;
cout<< "enter a year and see if its a leap year"<<endl;
cin>>year;
//modulo to see if remadered
int mod1 = year % 4;
int mod2 = year %100;
int mod3 = year %400;
//ifs to see if it meets criteria
if ( mod1==0 || mod2 ==0 && mod3 ==0)
{
    cout<< "leap year"<<endl;
}
//otherwise not leap
else 
{
    cout<< "not leap year"<<endl;
}



return  0;
}