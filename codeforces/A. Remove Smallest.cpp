#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=true;
        int a;
        vector<int>v;
        cin>>a;
        while(a--)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int sz = v.size()-1;
        for(int i=0; i<sz; i++)
        {
            if(v[i+1]-v[i]>1)flag=false;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
