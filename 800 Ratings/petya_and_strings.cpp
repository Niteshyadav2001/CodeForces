#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] < 97)
        {
            str1[i] += 32;
        }
        if (str2[i] < 97)
        {
            str2[i] += 32;
        }
    }
    int flag = 0;
    if (str1 < str2)
    {
        cout << "-1";
    }
    else if (str1 > str2)
    {
        cout << "1";
    }
    else if (str1 == str2)
    {
        cout << "0";
    }
    return 0;
}