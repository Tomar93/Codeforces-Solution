#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,maxx,minn;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i]; 
    }
    for (int i = 0; i < size; i++)
    {
        if (i==0)
        {
            maxx = abs(arr[i] - arr[size -1]);
            minn = abs(arr[i] - arr[i+1]);
        }
        else if( i == size - 1)
        {
            maxx = abs(arr[i] - arr[0]);
            minn = abs(arr[i] - arr[i -1]);
        }
        else
        {
            maxx = max(abs(arr[i] - arr[size -1]),abs(arr[i] - arr[0]));
            minn = min(abs(arr[i] - arr[i+1]),abs(arr[i] - arr[i -1]));
        }
        cout<<minn<<" "<<maxx<<"\n";
    }
    
}