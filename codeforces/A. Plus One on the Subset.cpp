#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int mx=0,mn=10000000000,n,temp;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            mx=max(mx, temp);
            mn=min(mn, temp);
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}
