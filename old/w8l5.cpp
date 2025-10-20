//daniel matthews
//10/9/25
//three freinds input

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

//define the main()
int main()
{//loop counter
    int count=0;
//holds name each run
   string name1;
   //open/create file
ofstream outFile;
 outFile.open("lab5.txt");
 //loop runs 3 times
 for(count=1;count<4;count++)
 {//prompts freinds names
    cout<<"please enter friend "<<count<<" name"<<endl;
    getline(cin, name1);
//prints them to file
outFile <<name1<<"\n";
}
//close file
outFile.close();
    return 0;
}