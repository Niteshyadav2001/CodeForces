#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0;i<str.length();i++)
    {
        if(str[i] >= 65 && str[i] <= 90) cnt1++;
        else if(str[i] >= 97 && str[i] <= 122) cnt2++;
    }

    if(cnt1 > cnt2)
    {
        for(int i = 0;i<str.length();i++)
        {
            if(str[i] > 96)
            {
                str[i]-=32;
            }
        }
    }

    else if(cnt1 <= cnt2)
    {
        for(int i = 0;i<str.length();i++)
        {
            if(str[i] < 91)
            {
                str[i]+=32;
            }
        }
    }
    cout<<str;
    return 0;
}