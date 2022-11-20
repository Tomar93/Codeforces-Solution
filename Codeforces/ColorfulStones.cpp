#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >>a >>b;
    int i;
    for(i=0;i<a.size();i++)
    {
        int t = b.find(a[i]);
        cout<<t;
        if (t==-1) break;
        b.erase(0,t+1);
    }
    cout<<i+1;
}