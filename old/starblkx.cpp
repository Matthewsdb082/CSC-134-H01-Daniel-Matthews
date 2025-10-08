//daniel matthews
//10/4/25
// build * chest board pattern
#include <iostream>
using namespace std;

int main() {
    //variable
    int input;
    int a = 0;
    int b = 0;
//how big user wants board
    cout << "Enter the input of the chessboard pattern";
    cin >> input;
//starts the data for a a
    for (a = 0; a <= input; ++a) {
        //builds the bloms after maths and if
        for (b = 0; b <= input; ++b) {
            // Alternate between asterisk and space
            if ((a + b) % 2 == 0)
                cout << "*";
            else
                cout << " ";
        }
        //end a
        cout << endl; 
    }

    return 0;
}
