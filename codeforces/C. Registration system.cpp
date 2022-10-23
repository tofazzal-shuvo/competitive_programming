
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
        map<string, int>mp;
        while(t--)
        {
            string tm;
            cin>>tm;
            if(mp[tm]==0)
                cout<<"OK"<<endl;

            else cout<<tm<<mp[tm]<<endl;

            mp[tm]++;
        }

    }
    return 0;
}
