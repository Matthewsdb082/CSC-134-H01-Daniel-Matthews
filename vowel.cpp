//daniel matthews
//9/10/25
//vowel or const inputer

#include <iostream>
using namespace std;

int main()
{
    char letter;
cout<< "Give me a letter"<<endl;
cin >> letter;
if (letter >='a' && letter<='z' || letter >='A' && letter<='Z')
{
switch(letter)
{
 case 'a':
 case 'A': cout<< "vowl"<<endl;
 break;
case 'e':
case 'E':cout<< "vowl"<<endl;
break;
case 'i':
 case 'I': cout<< "vowl"<<endl;
 break;
case 'o':
case 'O':cout<< "vowl"<<endl;
break;
case 'u':
case 'U':cout<< "vowl"<<endl;
break;
default:cout<< "const"<<endl;
   break;
}
}

else 
{
cout<<"input a letter from alphabet not number or multiple letters or words"<<endl;
}
return 0;
}