#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    int i=3;
    while(i--)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    cout<<v[1]-v[0] + v[2]-v[1]<<endl;
    return 0;
}
