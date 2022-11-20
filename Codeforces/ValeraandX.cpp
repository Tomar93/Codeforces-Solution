#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    char a[size][size];
    int flag =0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin>>a[i][j];
            char first = a[0][0];
            char sec = a[0][1];
            if (i == j || i == size-1-j){
                if (first != a[i][j])
                {
                    flag = 1;
                }
                
            }
            else{
                if (sec!=a[i][j] || first == a[i][j]){
                    flag = 1;
                }

            }
            
        }
    }
    if (flag){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    
}