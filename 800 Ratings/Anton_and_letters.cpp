#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taking input
    string str;
    int count = 1;
    getline(cin,str);

    //writing down the soln
    string temp;
    for(int i = 1;i<str.length()-1;i = i + 3)
    {
        temp.push_back(str[i]);
    }
    sort(temp.begin() , temp.end());
    if(temp.length() == 0)
    {
        cout<<"0";
        return 0;
    }
    
    for(int i = 0;i<temp.length()-1;i++)
    {
        if(temp[i] != temp[i+1])
        {
            count++;
        }
    }
    cout<<count;

    return 0;
}