#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,sum=1;
    cin>>k>>r;
    while(true){
        if ((k*sum)%10 == 0 || (k*sum)%10 == r){
            cout<<sum;
            return 0;
        }
        sum++;
    }
}