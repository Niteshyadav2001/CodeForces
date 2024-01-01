#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    char ch;
    for(int i = 0;i<n;i++)
    {
        cin>>ch;
        s.push_back(ch);
    }
    int count = 0;
    for(int i = 1;i<n;i++)
    {
        if(s[i-1] == s[i]) count++;
    }
    cout<<count;
    return 0;
}