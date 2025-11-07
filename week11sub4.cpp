//daniel matthews
//10/31/25
// credit card verivifer
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
 // srtings arrays and variables
int ccarray[17];
string creditnum = "5454545454545474";
string NN;
string x;
int y;
int run2=0;
int total2=0;
int counter=0;
int run1=0;
int total1=0;
// sring to array converter
for(int k = creditnum.length()-1; k >= 0; k--)
{
  x =creditnum[k];
  y =stoi(x);
ccarray[(creditnum.length() - 1) - k] = y;
//runs new array and alternates skipping the far right number
}
for(int k = 0; k <= creditnum.length()-1; k++) 
{
  counter++;
   if (counter%2==0)
    { 
    run2 =ccarray[k]*2;
    total2 +=run2; // runing total of the num*2
    //cout<<ccarray[k]<<endl; aids in cheching for alternating issues
    }
 else 
 {
    run1=ccarray[k];
    total1 +=run1; // add the non *2 numbers 
//cout<<"    "<<ccarray[k]<<endl; aids in cheching for alternating issues
 }
}
// adds num*2 and the non*2 for a total 
int total =total1+total2;
cout<<total;
//mod 10 and is vaild yes no 
if (total%10<=0)
{
    cout<<"\ncredit card number is valid\n";
}
else 
{
    cout<<"\ncredit card number is not valid\n";
}
    return 0;
}