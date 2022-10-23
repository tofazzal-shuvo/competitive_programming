

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        map<int, int>mp;
        for(int i=0; i<t; i++)
        {
            int te;
            cin>>te;
            mp[te]++;
        }
        if( mp.size() == t && t%2!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
