#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,row = -1,col = -1;
    vector<int> temp;
    vector<vector<int>> arr;
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            cin>>n;
            temp.push_back(n);
        }
        arr.push_back(temp);
        temp = {};
    }

    //finding the 1
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            if(arr[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
    }
    int result = abs(row-2)+abs(col-2);
    cout<<result;
    return 0;
}