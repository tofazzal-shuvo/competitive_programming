#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st1, st2;
        cin>>st1>>st2;
        if(st1[st1.length()-1]==st2[st2.length()-1])
        {
            if(st1[st1.length()-1]=='L')
            {
                if(st1.length()>st2.length())cout<<'>'<<endl;
                else if(st1.length()<st2.length())cout<<'<'<<endl;
                else cout<<'='<<endl;
            }
            else
            {
                if(st1.length()>st2.length())cout<<'<'<<endl;
                else if(st1.length()<st2.length())cout<<'>'<<endl;
                else cout<<'='<<endl;
            }
        }
        else if(st1[st1.length()-1]=='S')
        {
            cout<<'<'<<endl;
        }
        else if(st1[st1.length()-1]=='S')
        {
            cout<<'>'<<endl;
        }
        else if(st1[st1.length()-1]=='M'&&st2[st2.length()-1]=='S')
        {
            cout<<'>'<<endl;
        }
        else if(st1[st1.length()-1]=='S'&&st2[st2.length()-1]=='M')
        {
            cout<<'<'<<endl;
        }
        else if(st1[st1.length()-1]=='L')
        {
            cout<<'>'<<endl;
        }
        else cout<<'<'<<endl;
    }
    return 0;
}
