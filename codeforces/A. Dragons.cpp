#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s, n;
    while(cin>>s>>n)
    {
        bool flag=true;
        map<int, int>mp;
        map<int, int>::iterator it;
        while(n--)
        {
            int tm, tm1;
            cin>>tm>>tm1;
            mp[tm]=tm1 + mp[tm];
        }
        for(it = mp.begin(); it != mp.end(); it++)
        {
            if(it->first >= s)
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
            s+=it->second;
        }
        if(flag)cout<<"YES"<<endl;

    }
    return 0;
}
