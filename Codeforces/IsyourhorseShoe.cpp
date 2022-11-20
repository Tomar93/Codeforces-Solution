#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sh[4],count=0;
    for(int i=0;i<4;i++){
        cin>>sh[i];
    }
    sort(sh,sh+4);
    for(int i=0;i<4;i++){
        if (sh[i] == sh[i+1]){
            count++;
        }
    }
    
    cout<<count;

}