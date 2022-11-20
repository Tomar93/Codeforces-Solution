#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,div;
    cin>>size>>div;
    string result ="";
    if (size < 2 && div == 10)
    {
        cout<<-1;
    }
    else if(size >=2 && div ==10)
    {
        for (int i = 0; i < size - 1; i++)
        {
            result +=1 +'0';// '0' means null
        }
        result+=0 + '0';
        cout<<result<<endl;
        
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            result +=div +'0';
        }
        cout<<result<<endl;
        
    }
}