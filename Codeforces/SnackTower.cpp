#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int in = size;
    int frq[size + 1] ={0};
    for (int i = 0; i < size; i++)
    {
        int num;
        cin>>num;
        frq[num] = 1;
        while (frq[in])
        {
            cout<<in<<" ";
            in--;
        }
        cout<<endl;
        
    }
    
}