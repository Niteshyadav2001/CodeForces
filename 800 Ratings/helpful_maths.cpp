#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string temp;
    for(int i = 0;i<str.length();i+=2)
    {
        temp.push_back(str[i]);
    }
    sort(temp.begin(),temp.end());

    int j = 0;
    for(int i = 0;i<str.length();i+=2)
    {
        str[i] = temp[j];
        j++;
    }
    for(int i = 0;i<str.length();i++)
    {
        cout<<str[i];
    }
    return 0;
}