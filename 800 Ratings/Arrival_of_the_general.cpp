#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int num;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++)
    {
        cin>>num;
        mini = min(mini,num);
        maxi = max(maxi,num);
        arr.push_back(num);
    }
    // cout<<mini<<endl<<maxi<<endl;

    int index_max,index_min,count_max = 0,count_min = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i] == maxi)
        {
            index_max = i;
            break;
        }
        count_max++;
    }
    for(int i = n-1;i>=0;i--)
    {
        if(arr[i] == mini)
        {
            index_min = i;
            break; 
        }
        count_min++;
    }
    if(index_max > index_min)
    {
        cout<<count_max+count_min-1;
    }
    else{
        cout<<count_max+count_min;
    }
    // cout<<index_max<<endl<<index_min<<endl;
    return 0;
}