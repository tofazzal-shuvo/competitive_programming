#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int>vc;
    cin>>n;
    while(n--)
    {
        int temp;
        cin>>temp;
        vc.push_back(temp);
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<vc.size(); i++)
    {
        if(i+1==vc.size())cout<<vc[i];
        else cout<<vc[i]<<" ";
    }
    return 0;
}
