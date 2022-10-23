#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        int n;
        cin>>n;
        vector<int>v;
        vector<int>::iterator it;
        for(int i=0; i<n; i++)
        {
            int tm;
            cin>>tm;
            v.push_back(tm);
        }
        cin>>st;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            it = find (v.begin(), v.end(), v[i]);
            if (it != v.end())
            {
                int idx= it - v.begin();
                if(st[idx]!=st[i])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}
