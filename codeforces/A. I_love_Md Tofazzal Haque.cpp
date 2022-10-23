#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int mx=0, mn=100000, cnt=0;
        int p;
        cin>>p;
        mx=max(p, mx);
        mn=min(p, mn);
        n--;
        while(n--)
        {
            cin>>p;
            if(p<mn)
            {
                cnt++;
                mn=p;
            }
            else if(p>mx)
            {
                cnt++;
                mx=p;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
