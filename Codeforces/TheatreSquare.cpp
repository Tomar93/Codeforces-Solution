#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int width = x/z;
    if (x%z >0){
        width++;
    }
    int height = x/z;
    if (x%z >0){
        height++;
    }
    cout<<width*height;
}