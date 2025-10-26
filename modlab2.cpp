//daniel matthews
//10/26/25
//day to day sales txt
#include <iostream> 
#include <fstream>
using namespace std;

//define the main()
int main()
{
//open/create file
ofstream outFile;
 outFile.open("week9_lab2.txt");
 //variables
int input=0;
int count=0;
int sales =0;
int total =0;
// prompt/inputs
cout<<"input number of days"<<endl;
cin>>input;
//loop/input
for(count=1;count<=input;count++)
{
cout<<"day "<<count<<" sales"<<endl;
cin>>sales;
// print to file plus runing total cals
outFile<<sales<<"\n";
total = total + sales;
}
//output total to file
outFile<<"\n";
outFile<<"====================\n";
outFile<<"Total sales: $"<<total<<"\n";
outFile<<"====================\n";
  //close
 outFile.close();
 return 0;
}


