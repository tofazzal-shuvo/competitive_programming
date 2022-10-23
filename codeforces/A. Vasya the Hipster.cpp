#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b,r;
    while(cin>>b>>r)
    {
        if(b==r)cout<<b<<" "<<0<<endl;
        else if(b>r)cout<<r<<" "<<(b-r)/2<<endl;
        else cout<<b<<" "<<(r-b)/2<<endl;
    }
    return 0;
}
