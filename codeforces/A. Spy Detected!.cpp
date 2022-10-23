#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp;
        map<int, int>mp;
        map<int, int>::iterator it;
        vector<int>v;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            v.push_back(temp);
            mp[temp]++;
        }
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second == 1)
            {
                for(int i=0; i<v.size(); i++)if(v[i]==it->first)
                    {
                        cout<<i+1<<endl;
                        break;
                    }
            }
        }
    }
    return 0;
}
