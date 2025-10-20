//daniel matthews
//10/9/25
// infile sumer

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

//define the main()
int main()
{
    //variable
int sum = 0;
int run=0;
//open/create
    ifstream inputFile;
inputFile.open("numbers.txt");
//reads adds each row
while(inputFile>>sum)
{
    //math
run=run+sum;
}
// close file and output total
inputFile.close();
cout<<"total is"<<run<<endl;


return 0;
}