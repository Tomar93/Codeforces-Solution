#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINEJUDGE
     freopen("in.txt","r",stdin);
     freopen("out.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    int ans=0;
    while (a<=b)
    {
       a=a*3;
       b=b*2;
       ans++;
    }
    cout<<ans<<endl;

    
}