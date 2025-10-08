//daniel matthews
//10/8/25
//txt file print out
#include <iostream> 
#include <fstream>
using namespace std;

//define the main()
int main()
{
ofstream outFile;
 outFile.open("lab1.txt");
 outFile << "Bourne Identity"<<endl;
 outFile <<"Star Wars Episode IV"<<endl;
 outFile <<"The Hunger Games"<<endl;
 outFile <<"Dead Pool"<<endl;
 outFile <<"X-Men First Class"<<endl;
 outFile << "Star Wars Espisode V"<<endl;
 outFile << "Get Out"<<endl;
 return 0;
}