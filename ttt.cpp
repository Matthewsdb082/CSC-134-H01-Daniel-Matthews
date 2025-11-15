// daniel matthews
// 11/12/25
// tic tac toe


#include <iostream>
#include <cstdlib>// makes the board clearing possible
using namespace std;
// builds board and int for target 
int board[3][3]={};
int target=0;

// cleans code up by using another function
bool checkWin(int target)
{
    //checks for rows 3in row 
for (int r = 0; r < 3; r++){
if (board[r][0] + board[r][1] + board[r][2] == target) { return true;}}
//checks for collems 3 in row
for (int c = 0; c < 3; c++)
{ if (board[0][c] + board[1][c] + board[2][c] == target)  {return true;}}

if (board[0][0]+board[1][1]+board[2][2]==target) return true;//diagnak check
    
else if(board[2][0]+board[1][1]+board[0][2]==target)return true;// diagnal check
    return false;
}

int main()
{
int player1 = 5;
int player2 =100;
int c,r =0;
int counter = 0;
int draw =0;
//intital board build
system("cls");
for (int r1=0;r1<=2;r1++) {
        for (int c1 = 0;c1<=2;c1++)
         {
        if (board[r1][c1] == 0) cout << " . ";   // empty
    }
    cout<<endl;
}
// turn limit for game over
for( counter = 0; counter<=9;counter)
{

// user prompt
cout<<"player one input where to place x row col"<<endl;

while (true)
{
    cin >> r>>c;
// see if place is taken
    if (board[r][c] == player1 || board[r][c] == player2) // cin cant conver letter to ints so flags
    {cin.clear(); // clear the error flag
        cin.ignore(1000000000, '\n');
        cout<<"enter a place not taken player 1";
    } 
    //catches out of bounds inputs
    else if(r>=3||c>=3)
    {cin.clear(); // clear the error flag
        cin.ignore(1000000000, '\n');
        cout<<"input must be 2 or less redo inputs from begining of turn player 1"<<endl;}

 //if vailid avoids the input fail then conties back to for loop
     else if (board[r][c]<=player1&&player2)
    { //inputs value into array
        board[r][c] = player1;
        break;
    } 
}
draw = draw+player1;
//clear board
system("cls");
//rebuilds board
    for (int r1=0;r1<=2;r1++) {
        for (int c1 = 0;c1<=2;c1++)
         {
      
        if (board[r1][c1] == 0) cout << " . ";   // empty
        else if (board[r1][c1] == player1) cout << " X ";
        else if (board[r1][c1] == player2) cout << " O ";
    }
   cout<< endl;
    }
//win check
if (checkWin(15)) { cout << "Player 1 wins!\n"; break; }
//cheacks for draw based on the maths of player 1 and 2
if (draw==425){cout<<"its a draw\n"; break;}


// in promts
cout<<"player 2 input where to place o row col"<<endl;
while(true)
{
    cin >> r>>c;
//checks to see spot is avaiable or needs new place
    if (board[r][c] == player1 || board[r][c] == player2) // cin cant conver letter to ints so flags
    {cin.clear(); // clear the error flag
        cin.ignore(1000000000, '\n');
        cout<<"enter a place not taken redo turn player 2";
    } 
    // out of bounds input catch
    else if(r>=3||c>=3)
    {cin.clear(); // clear the error flag
        cin.ignore(1000000000, '\n');
        cout<<"input must be 2 or less redo inputs from begining of turn player 2"<<endl;}

 //if vailid avoids the input fail then conties back to for loop
     else if (board[r][c]<=player1&&player2)
    { //inputs value into array
        board[r][c] = player2;
        break;
    } 
}
// clears term
system("cls");
//prints board again
    for (int r1=0;r1<=2;r1++) {
        for (int c1 = 0;c1<=2;c1++)
         {
      
        if (board[r1][c1] == 0) cout << " . ";   // empty
        else if (board[r1][c1] == player1) cout << " X ";
        else if (board[r1][c1] == player2) cout << " O ";
    }
   cout<< endl;
    }
    //sees if there is a winner
 draw=draw+player2;
 if (checkWin(300)) { cout << "Player 2 wins!\n"; break; }
   
}


}

