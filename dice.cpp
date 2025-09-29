// daniel matthews
// 9/28/25
// dice roll program

 #include <iostream>
#include <cstdlib> // Required for rand()
#include <ctime>
using namespace std;
  
int main() {
// int declration
int i = 0;
int in = 0;
int randomNumber;
// promts
cout<<"input how many timews u wish to roll the dice"<<endl;
cin>>in;

srand(time(0));
    for(i=0;i<=in;i++)
    {
// randmoizer
     randomNumber = 1 + rand() %  6;
    }
    // print to console last num
         cout << "Random number: " << randomNumber << endl;

    return 0;
}