#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int mn=1000;
        n--;
        vector<int>v;
        for(int i=0; i<m; i++)
        {
            int t;
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size() && i+n < v.size(); i++)
        {
            int temp = v[i+n]-v[i];
            mn=min(temp, mn);
        }
        cout<<mn<<endl;
    }
    return 0;
}
