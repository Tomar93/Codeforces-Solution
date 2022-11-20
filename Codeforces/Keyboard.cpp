#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    string str;
    cin>>str;
    string str1 = {'q','w','e','r','t','y','u','i','o','p'};
    string str2 ={'a','s','d','f','g','h','j','k','l',';'};
    string str3 = {'z','x','c','v','b','n','m',',','.','/'};
    int n = str.length();
    if (c == 'L')
    {
        for (int i = 0; i <n; i++)
        {
            for (int j = 9; j >=0; j--)
            {
                if(str[i] == str1[j])
                    str[i] = str1[j+1];
                else if (str[i] == str2[j])
                    str[i] = str2[j+1];
                else if (str[i] == str3[j])
                    str[i] = str3[j+1];
            }
            
        }
        

    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <10; j++)
            {
                if(str[i] == str1[j])
                    str[i] = str1[j-1];
                else if (str[i] == str2[j])
                    str[i] = str2[j-1];
                else if (str[i] == str3[j])
                    str[i] = str3[j-1];
            }
            
        }

    }
    cout<<str;
}