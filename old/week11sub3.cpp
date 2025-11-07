//daniel matthews
//10/9/25
// infile sum adder

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

//define the main()
int main()
{//var file array
    ofstream outFile;
    ifstream inFile;
 inFile.open("sales.txt");
int sum = 0;
const int LOL = 5;
 double list[LOL];

 //flips through index adds to sum
for (int count =0 ; count <5;count++)
{
inFile>>list[count];
sum= sum+list[count];
}
// cout sum total.
cout<<"the total sales is:"<<sum;

//close file
outFile.close();
    return 0;
}

