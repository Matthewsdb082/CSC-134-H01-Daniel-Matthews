//daniel matthews
//10/4/25
//budget calulator loop
#include <iostream>
using namespace std;


int main()
{
    //variables
int budget =0;
char choice;
int expense =0;
int total=0;
int dif=0;
//pre loop input
cout<<"input budget"<<endl;
cin>>budget;
// loop exspenses andd to total 
    do {
        cout << "Enter an expense: ";
        cin >> expense;
        total += expense;

        cout << "Do you want to enter another expense? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    //if over or under and by how much
if(budget>total)
{
     dif= budget-total;
 cout<<"good work under budget by:"<<dif<<endl;
}
else
 dif=total-budget;
 cout<<"over budget by:"<<dif<<endl;
 
return 0;

}