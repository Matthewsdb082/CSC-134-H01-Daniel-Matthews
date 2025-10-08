// daniel matthews
//9/28/25
//power of counter
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    //variable
int cnt = 100;
int run =0;
//for loop for power
for(run=0;run<=cnt;run++)
{
    //math for power
int power = pow(run, 2);
//print
cout<<"number:"<<run<<"|"<<power<<endl;
}

return 0;
}