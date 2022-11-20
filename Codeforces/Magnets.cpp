#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n=0,sum=0;// doubt unsigned int n=0
    char f,s;
    cin>>n;
    for (unsigned int i = 0; i < n; i++)
    {
        cin>>f;
        if (s==f){
            sum++;
        }
        cin>>s;
    }
    cout<<sum+1;// no. of groupes = no. of gapes + 1

    
    return 0;
}