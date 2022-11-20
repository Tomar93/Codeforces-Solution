#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if (a == b) cout<<-1;
    else if (a.size() < b.size()) cout <<b.size();
    else cout<< a.size();

}