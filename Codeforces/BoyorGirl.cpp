#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    sort(s.begin(),s.end());
    int count =0;
    int i=0;
    while (i<n-1)
    {
        if (s[i]!=s[i+1]) count++;
        i++;
    }
    if (count%2 ==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM";
    return 0;
    
    
}