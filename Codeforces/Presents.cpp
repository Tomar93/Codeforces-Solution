#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int x[n],y[n];
    for(i=1;i<=n;i++)
    {
        cin>>y[i];
        j=y[i];
        x[j]=i;
    }
    for(i=1;i<=n;i++)
    {
        cout<< x[i]<< " ";
    }
}