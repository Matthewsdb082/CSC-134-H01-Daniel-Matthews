//daniel matthews
//10/26/25
//day to day sales txt
#include <iostream> 
#include <fstream>
using namespace std;

//define the main()
int main()
{
//open/creat file 
ofstream outFile;
 outFile.open("week9_lab1.txt");
//variables
int input=0;
int count=0;
int sales =0;

//prompt/input
cout<<"input number of days"<<endl;
cin>>input;
//loop / inputs
for(count=1;count<=input;count++)
{
cout<<"day "<<count<<" sales"<<endl;
cin>>sales;
// prints to file
outFile<<sales<<"\n";
}
  //close
 outFile.close();
 return 0;
}
