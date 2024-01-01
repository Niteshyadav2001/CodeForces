#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin>>year;
    int count = 0;
    vector<int> temp;

    while(count != 3)
    {
        year += 1;
        temp = {};
        count = 0;
        int temp_year = year;
        while(temp_year != 0)
        {
            int rem = temp_year%10;
            temp.push_back(rem);
            temp_year = temp_year/10;
        }
        sort(temp.begin(),temp.end());
        for(int i = 0;i<temp.size() - 1;i++)
        {
            if(temp[i] != temp[i+1])
            {
                ++count;
            }
        }
    }
    cout<<year;
    return 0;
}