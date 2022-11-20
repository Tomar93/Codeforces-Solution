#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;//number of problems
    for (int i = 0; i < n; i++)// loop n times
    {
        int x,y,z;
        cin>>x>>y>>z;// the three memebers
        ans+=(x+y+z)>=2;
    }
    cout<<ans<<endl;
    
    
}