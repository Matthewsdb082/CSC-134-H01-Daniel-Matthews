// daniel matthews
// 8/30/2025
// 

#include <iostream> 
using namespace std;

//define the main()
int main()
{
    int v =55;
    int t =00;
    int d =1001;
    int product;
 if( v >= 1 && t >= 1) 
 {  product = v * t ;

    cout <<  product<<"Miles"<<endl; 

}

 if (d >= 1 && t >= 1)
{
    product = d/t;
   cout <<  product <<"MPH" <<endl; 
}

if (d >= 1 && v >= 1)
{
 product= d/v;
cout <<  product <<"Time" <<endl; 
}
//this prints out the product of the two number from above
   

    return 0;
}