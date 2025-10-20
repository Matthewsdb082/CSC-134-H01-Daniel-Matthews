//daniel matthews
//10/8/25
//txt recipt print out
#include <iostream> 
#include <fstream>
using namespace std;

//define the main()
int main()
{
    //open/creat file
ofstream outFile;
 outFile.open("lab2.txt");
 //print to file
 outFile << "********************************\n";
 outFile <<"\t\t\tSHOPPING CART\n";
 outFile <<"********************************\n";
 outFile <<"Product code\tqty\tPrice\n"<<endl;
 outFile <<"\t789\t\t7\t$12.00"<<endl;
 outFile << "\t\t\t\t\t\tTotal: $84.00"<<endl;
 //close file
outFile.close();
 return 0;
}