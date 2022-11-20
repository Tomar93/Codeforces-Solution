#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ucount=0,lcount=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]<'a') ucount++;
        if (s[i]>='a') lcount++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (lcount>=ucount){
            if (s[i]<'a')
            s[i]+='a'-'A';
        }
        else{
            if (s[i]>='a')
            s[i]-='a'-'A' ;
        }
    }
    cout<<s<<endl;
    return 0;
}