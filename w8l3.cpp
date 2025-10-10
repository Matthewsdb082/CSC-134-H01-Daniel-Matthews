//daniel matthews
//10/9/25
//remove \n
//daniel matthews
//10/8/25
//txt file print out
#include <iostream> 
#include <fstream>
using namespace std;

//define the main()
int main()
{
    //creat/open file
ofstream outFile;
 outFile.open("lab3.txt");
 // prints everthing one row now spaces looks bad
 outFile << "Bourne Identity";
 outFile <<"Star Wars Episode IV";
 outFile <<"The Hunger Games";
 outFile <<"Dead Pool";
 outFile <<"X-Men First Class";
 outFile << "Star Wars Espisode V";
 outFile << "Get Out";
 //close
 outFile.close();
 return 0;
}