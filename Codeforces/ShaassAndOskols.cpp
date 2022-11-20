#include<bits/stdc++.h>
using namespace std;
int main()
{
    const int MAX = 100;
    int birds[MAX];

    int n;
    cin>>n;

    for(int i =0;i<n;i++)
        cin>>birds[i];
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        --x;  //x input is 1 based . we need it 0-based to access array

        //kill yth bird in xth position:(y-1 items,y,a-y)

        if (x!=0)  // if there exists no upper wire then fly away.
            birds[x-1]+= y-1; // scared and jump up
        if (x != n-1)
            birds[x+1] += birds[x] - y; // scared and jump down

        birds[x] = 0;  //now it is empty

    }
for(int i=0;i<n;i++){
    cout<<birds[i]<<"\n";
}
}
























/* 3 5 2 

 1 2 3    1 2 3 4 5       1 2

 2 4     =>kill the 4th bird
 
 3 fly to right,1 fly to left 
 1 2 3 1 2     x        5 1 2
 
 6 0 3 
 */