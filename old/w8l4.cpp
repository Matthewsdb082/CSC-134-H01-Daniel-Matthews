//daniel matthews
//10/9/25
// txt loop printer ()close
#include <iostream> 
#include <fstream>
using namespace std;

//define the main()
int main()
{
    //variable
    int input=0;
    int count=0;
    //promppt inpurt
    cout<<"please enter loop count u desire"<<endl;
    cin>>input;
    //open/creat file
ofstream outFile;
 outFile.open("lab4.txt");
 //count compare to input
for(count=0;count<=input;count++)
{//prints count to file
outFile <<count<<"\n";
}
//close file
outFile.close();
    return 0;
}