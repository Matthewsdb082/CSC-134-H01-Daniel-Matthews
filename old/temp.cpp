//daniel matthews
//9/21/25
//temp of 212.34

#include <iostream>
using namespace std;

int main()
{
    //input holder
double temp= 0.00;
while (true)
{ // loop until right
cout <<"enter the temp"<<endl;
cin>>temp;
//test to see if right
if (temp==212.34)
{
    cout<<"thank you tempature has been succefully set"<< endl;
    break;
}
// otherwise prompts to ry again
else{
cout<<"Incorrect tempature please try again"<< endl;
}

}


return 0;


}