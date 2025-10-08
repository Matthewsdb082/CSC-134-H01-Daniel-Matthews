#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the chessboard: ";
    cin >> size;

    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            // Alternate between asterisk and space
            if ((row + col) % 2 == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
