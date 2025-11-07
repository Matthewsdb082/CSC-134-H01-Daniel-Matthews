//daniel matthews
//10/29/25
//5 integer sum
#include <iostream> 
using namespace std;

//define the main()
int main()
{
    //variables arrays
const int SIZE = 5;
int array[SIZE];
int count = 0;
int sum = 0 ;
// takes inputs puts into an array and takes value adds to sum
for(count=0;count<SIZE;count++)
{
    cout<<"input number"<<count<<"\n";
    cin>>array[count];
    sum += array[count];
}
//cout sum
cout<<sum;


}
