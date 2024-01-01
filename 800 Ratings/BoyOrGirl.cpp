#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    set<char> temp;
    for(int i = 0;i<str.size();i++)
    {
        char ch = str[i];
        temp.insert(ch);
    }
    int len = temp.size();
    if(len%2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}