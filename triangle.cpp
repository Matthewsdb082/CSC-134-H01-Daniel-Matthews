//daniel matthews
//9/17/25
//3 4 5 triangle yes or no
#include <iostream>
#include <cmath>   // for sqrt, atan2, M_PI, abs

using namespace std;

int main()
{
    double x = 6.0;
    double y = 7.0;
const double PI = 3.141592653589793;
    // calculate hypotenuse
    double c = sqrt((x * x) + (y * y));

    // calculate angle in radians
    double theta_radians = atan2(y, x);

    // convert to degrees
    double theta_degrees = theta_radians * (180.0 /PI);

    cout << "Theta = " << theta_degrees << " degrees" << endl;

    // check if it's a 3-4-5 triangle
    if (abs(theta_degrees - 53.13) < 0.01) { // allow small rounding error
        cout << "This is a 3-4-5 triangle" << endl;
    } else {
        cout << "This is NOT a 3-4-5 triangle" << endl;
    }

    return 0;
}