//daniel matthews
//10/9/25
//freinds.txt file reading to console

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

//define the main()
int main()
//open filre
{string name;
    ifstream inputFile;
inputFile.open("friends.txt");
//read and loop till alll read
while(getline(inputFile, name))
{
    //prints to console
cout<<name<<endl;
}
//close file
inputFile.close();
return 0;

}