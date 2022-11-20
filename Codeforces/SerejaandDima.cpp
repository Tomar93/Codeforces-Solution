#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int s=0,t=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    int flag=1;
    while (i<=j)
    {
        if (flag)
        {
            if (arr[i]>arr[j])
            {
                s+=arr[i];
                i++;
            }
                
            else
            {
                s+=arr[j];
                j--;
            }
               
        }
        else
        {
            if (arr[i]>arr[j])
            {
                t+=arr[i];
                i++;
            }
            else
           { 
              t+=arr[j];
              j--;
           }
        }
        flag=!flag;
    }
    cout<<s<<" "<<t<<"\n";
    return 0;
    
}