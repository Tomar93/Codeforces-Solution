#include<iostream>
using namespace std;
int main()
{
    int n,h;cin>>n>>h;
    int x,ans=0;
    for (int i = 1; i <=n; i++)
    {
        cin>>x;
        if (x>h)
            ans++;
        ans++;
        
    }
    cout<<ans;
    
}