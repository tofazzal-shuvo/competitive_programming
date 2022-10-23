
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    while(cin>>n>>h)
    {
        int width=0, h1;
        while(n--)
        {
            cin>>h1;
            if(h1>h)width+=2;
            else width++;
        }
        cout<<width<<endl;
    }
    return 0;
}
