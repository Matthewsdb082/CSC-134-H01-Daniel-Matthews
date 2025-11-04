//daniel matthews
//10/29/25
//test grade array avg
#include <iostream> 
using namespace std;

//define the main()
int main()
{
const int SIZE = 10;
int array[SIZE];
int count = 0;
int sum = 0 ;
for(count=0;count<SIZE;count++)
{
    cout<<"input test"<<count<<"grade\n";
    cin>>array[count];
    sum += array[count];
}
double avg=sum/10;
cout<<avg;



}
