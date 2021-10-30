//palindrome
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string[20];
    int i;
    int length;
    int flag=0;
    cout<<"enter a string :";
    cin>>string;
    length =strlen(string);
    for(i=0;i<length;i++)
    {
        if(string[i]!=string[length-i-1])
        flag=1;
        break;
    }
    if(flag)
    {
        cout<<string<<" it is not a palindrome"<<endl;
    }
    else
    {
        cout<<string<<" it is a palindrome"<<endl;
    }
    
    return 0;
}
