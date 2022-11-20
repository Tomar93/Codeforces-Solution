#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,hired=0,untreated=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]>0 && a[i]<11) hired+=a[i];
        else if (a[i]<0 && (a[i]*(-1))>hired)  untreated++;
        else if (a[i] <0 && (a[i]*(-1))<=hired) hired--;
    }
    cout<<untreated;
}