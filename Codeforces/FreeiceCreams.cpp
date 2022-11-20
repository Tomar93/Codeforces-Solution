#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long sum,c=0;
    cin>>n>>sum;
    while(n-->0)
    {
        string s;
        long long a;
        cin>>s;
        cin>>a;
        if (s == "+"){
            sum+=a;
        }
        else if (s == "-")
        {
            if (sum<a)
            {
                ++c;
            }
            else
            {
                sum-=a;
            }
        }

    }
    cout<<sum<<" "<<c;
}