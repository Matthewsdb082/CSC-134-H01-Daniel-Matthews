//daniel matthews
//9/10/25
//test avg p2 grade out

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//input value holder
double  A;
double B;
double C;
//inputs and out put prompt
cout <<"input test A"<<endl;
cin>>A;
cout <<"input test B"<<endl;
cin>>B;
cout<< "input test C"<<endl;
cin>>C;
//maths
double avg = (A+B+C)/3.0;

//if else for the letter grade output
if ( avg >= 90 && avg<=100 )
{
  cout <<"letter grade A"<< endl;
}
 else if (avg >= 80 && avg<=89)
{
 cout <<"letter grade B"<< endl;
}
 else if (avg >= 70 && avg<=79)
{
 cout <<"letter grade C"<< endl;
}
 else if (avg >= 60 && avg<=69)
{
 cout <<"letter grade D"<< endl;
}
 else if (avg >= 0 && avg<=60)
{
 cout <<"letter grade f"<< endl;
}
//error catch 
 else if (avg)
{
 cout <<"error input was not int reage of 0-100"<< endl;
}
return 0;
}