// daniel matthws
//9/28/25
// two variables named sumOp and adder sumop keeps total for adder.
#include <iostream>
using namespace std;

int main()
{
    //variables
    int sumOP =0;
    int adder = 10;
    int count = 0;
// loop runingtotal and adder
    for(count=0;count<=50;count++)
    {
    sumOP=sumOP+adder;
    cout<<count<<"|"<<sumOP<<endl;
    }
    return 0;
}