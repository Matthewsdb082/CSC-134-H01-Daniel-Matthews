//
//
//

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
  // calculate average AFTER loop
    avg = total / 10;    
    cout << "Test average: " << avg << endl;

    return 0;
}