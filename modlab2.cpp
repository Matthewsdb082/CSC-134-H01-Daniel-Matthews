//daniel matthews
//10/8/25
//day to day sales txt
#include <iostream> 
#include <fstream>
using namespace std;

//define the main()
int main()
{
ofstream outFile;
 outFile.open("week9_lab2.txt");
 
int input=0;
int count=0;
int sales =0;
int total =0;

cout<<"input number of days"<<endl;
cin>>input;

for(count=1;count<=input;count++)
{
cout<<"day "<<count<<" sales"<<endl;
cin>>sales;

outFile<<sales<<"\n";
total = total + sales;
}

  //close
 outFile.close();
 return 0;
}


