//daniel matthews
//9/3/25
// city average high rised by .02

#include <iostream>
using namespace std;

int main()
{
    // citys/input
    double new_york_city = 85.0;
    double Denver = 88.0;
    double Phoenix = 106.0;

   
  // math for 2% raise in temp
   new_york_city = new_york_city+ new_york_city*.02;
   Denver = Denver + Denver*.02;
   Phoenix = Phoenix + Phoenix*.02;

   // print to console
    cout << "new average high" << endl;
     cout<< new_york_city<<"F"<< endl;
     cout<< Denver<<"F"<<endl;
      cout<< Phoenix<<"F" <<endl;

    return 0;
}