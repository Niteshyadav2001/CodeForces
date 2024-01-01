#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of inputs: ";
    cin>>n;
    int arr[n];
    //for width and height
    for(int i = 0;i<2*n;i+=2)
    {
        cin>>arr[i];
        cin>>arr[i+1];
    }
    for(int i = 0;i<2*n;i += 2)
    {
        if(arr[i] == arr[i+1])
        {
            cout<<"Square"<<endl;
        }
        else{
            cout<<"Rectangle"<<endl;
        }
    }
    return 0;
}