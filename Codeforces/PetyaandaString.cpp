#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,ss;
    cin>>s>>ss;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]<'a')
          s[i]+='a'-'A';// convert uppercase to loercase
        if (ss[i]<'a')
          s[i]+='a'-'A';// convert uppercase to loercase
    }
    if (ss<s)
    cout<<-1<<endl;
    else if (ss==s)
    cout<<0<<endl;
    else
    cout<<1<<endl;
    return 0;
}