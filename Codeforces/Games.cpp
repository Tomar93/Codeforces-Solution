#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    int h[t],g[t];
    for(int i=0;i<t;i++){
        cin>>h[i]>>g[i];
    }
    for (int i = 0; i < t; i++)
    {
        int y = h[i];
        for (int j = 0; j < t; j++)
        {
           if (y==g[j]){
            count++;
           }
        }
        
    }
    cout<<count;
    
}