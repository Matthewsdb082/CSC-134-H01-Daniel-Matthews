//daniel matthews
//9/21/25
//while grade avger

#include <iostream>
using namespace std;

int main()
{
    float grade;   //inputs and place holder
    float total = 0.0;   
    float avg;
    int count = 0;       // loop count

    while(count < 10)
    {
        cout << "Input test grade #" << (count + 1) << ": "<<endl;
        cin >> grade;
 // add grade to total
        total += grade;  
        count++; // increment counter
    }
//avg and output
    avg = total / 10;    
    cout << "Test average: " << avg << endl;

    return 0;
}