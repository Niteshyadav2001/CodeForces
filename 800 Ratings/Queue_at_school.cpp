#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string str;
    char ch;
    cin>>n>>t;
    for(int i = 0;i<n;i++)
    {
        cin>>ch;
        str.push_back(ch);
    }

    string temp = str;

    for(int j = 0;j<t;j++)
    {
        temp = str;
        for(int i = 0;i<n-1;i++)
        {
            if(temp[i] == 'B' && temp[i+1] == 'G')
            {
                swap(str[i],str[i+1]);
            }
        }
    }
    cout<<str;
    return 0;
}