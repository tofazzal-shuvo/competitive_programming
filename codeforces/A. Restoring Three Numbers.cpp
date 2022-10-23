
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    int i=0;
    while(i<4)
    {
        i++;
        int t;
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2]<<endl;
    return 0;
}
