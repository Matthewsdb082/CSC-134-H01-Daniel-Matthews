//daniel matthews
// 10/4/25
// adds 6% increase to clubs memberships yearly cost
#include <iostream>
using namespace std;

int main()
 {
    //variable
    int size;
    double memb = 25000.00;
    int count = 0;
    //printst this years cost
cout<<"this years member ship cost:"<<memb<<endl;
//loops add inceast prints out the total for next 5 years
   for(count=1;count<=5;count++)
{
memb=memb+(memb*.060);
cout<<"membership cost year "<<count<<":"<<memb<<endl;
}
return 0;
}
