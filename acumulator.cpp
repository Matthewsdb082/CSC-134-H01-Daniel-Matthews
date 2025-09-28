// daniel matthews
// 9/27/25
// acumulator app

#include <iostream> 
using namespace std;

//define the main()
int main()
{
int in = 0;
int acumulator = 0;
cout<<"input how many iterations u want to run"<<endl;
cin>>in;
int run ;

if (in>1&&in<100)
{
for(run=0;run<in;run++)
{
       acumulator+=1;
}
}

cout<<acumulator<<endl;



return 0;
}