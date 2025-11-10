// daniel matthews
// 9/18/25
// plot graph


#include <iostream>
using namespace std;

int main() {
int A[16][18] = {};
int c = 15;
int d = 0;
int m =2;
int B=5;
int r =15;

    // builds first y axis values
 for (int b = 0; b < 16; b++) 
    {
        A[b][0] = c;
        c--;
    }

    // builds x axis values
    for (int e = 0; e < 18; e++) 
    {
        A[15][e] = d;
        d++;
    }
    // moves first y intercept to corract point
for(int P =0;P<=0;P++)
{
r= r-B;
//puts values in as 99 for stars
for (int mx=1;mx<=6;mx++)
{
    
    A[r][mx]=99;
    r=r-m;
}
}
// auto loops through converting 0 to blanks 99 to plot stars and values 1=< to blank|
    for (const auto& row : A) {
        for (const auto& value : row) {
            if (value == 0)
                cout << "  ";  // blank for zero
            else if(value ==99)
             cout << "*";
            else
                cout << value << "|";
        }
        cout << endl;
    }

    return 0;
}
