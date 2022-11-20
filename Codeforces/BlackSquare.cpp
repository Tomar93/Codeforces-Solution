#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    int one = 0, two = 0, thre = 0, four = 0, ans = 0;
    cin>>a>>b>>c>>d;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1') one++;
        else if (s[i] == '2') two++;
        else if (s[i] == '3') thre++;
        else four++;
    }
    ans=(a*one) + (b*two) + (c*thre) + (d*four);
    cout<<ans;
}
