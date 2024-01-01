#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taking input
    string str;
    cin>>str;
    
    //write down the soln
    int i = 0;
    while(i < str.length() )
    {
        if(str[i] == '.')
        {
            cout<<"0";
            i++;
        } 
        else if(str[i] == '-')
        {
            if(str[i+1] == '.')
            {
                cout<<"1";
                i += 2;
            }
            else if(str[i+1] == '-')
            {
                cout<<"2";
                i += 2;
            }
        }
    }
    return 0;
}