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
    ofstream outFile;
    ifstream inFile;
 inFile.open("sales.txt");
 

int sum = 0;
const int LOL = 5;

cout<<"how long is the list\n";
 
 double list[LOL];
 //count compare to input
for (int count =0 ; count <5;count++)
{
inFile>>list[count];
sum= sum+list[count];
}

cout<<"the total sales is:"<<sum;

//close file
outFile.close();
    return 0;
}

