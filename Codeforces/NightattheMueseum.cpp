#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int Smoves=0;
    int strt =0;
    for (int i = 0; i < s.size(); i++)
    {
        int index=s[i]-97; // to make a=0,........z=0; ascii value
        int walk =abs(strt-index); //(a->m)=(0-12)=|12|
        if (walk <13)
           Smoves +=walk; //sum of moves;
        else 
           Smoves+=26-walk;
        strt=index; //assign the index of prev. element

    }
    cout<<Smoves;
}