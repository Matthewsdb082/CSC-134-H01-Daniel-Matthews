//daniel matthews
//9/10/25
//odd or even modulo

#include <iostream>
using namespace std;
const int M = 2;

int main()
{
    //inputs and prompt
int num;
cout<<"input number to see if odd or even"<< endl;
cin>>num;
//math
int out = num % M;
//if elses with a input error finder kinda
if(out>=1)
{
    cout<<"the number is odd"<<endl;
}
else if(out==0)
{
    cout<<"the number is even"<<endl;
}
else if (out)
{
    cout<<"input error"<<endl; 
}
return 0;
}
//upond tourtcher test large large large numbers will auto be odd