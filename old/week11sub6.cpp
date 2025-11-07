//daniel matthews
//11/5/25
// revers input array
#include <iostream> 
using namespace std;

//define the main()
int main()
{
const int SIZE = 5;
int array[SIZE];
int count = 0;
int BB = 0 ;
int input = 0;


// loops thorugh the 5 times needed
cout<<"input 5 numerical values\n";
for (int A=0;A<5;A++)
{
//inf loop till valid data entered.
while (true)
{
    cin >> input;

    if (cin.fail()) // cin cant conver letter to ints so flags
    {
        cin.clear(); // clear the error flag
        cin.ignore(1000000000, '\n'); // discard invalid input
        cout << "Invalid input. Please enter an integer.\n";
    } 
 //if vailid avoids the input fail then conties back to for loop
     else if (input >= 0 && input < 1000000000)
    { //inputs value into array
        array[A] = input;
        break;
    } 
}
}
//revse and cout array values
for(int k=5-1; k >= 0; k--)
{
    cout<<array[k];
   
}

return 0;
}