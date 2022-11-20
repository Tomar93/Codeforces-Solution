#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column;
    int flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            char color;
            cin>>color;
            if (color == 'M' || color == 'Y' || color == 'C')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }    
    }
    if (flag == 1)
    {
        cout<<"#Color";
    }else{
        cout<<"#Black&White";
    }
    
    
}