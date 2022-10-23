#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    while(cin>>n>>t)
    {
        vector<int>v;
        for(int i=1; i<n; i++)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        string st = "NO";
        int i=1;
        while(i <= t)
        {
            if(i == t)
            {
                st="YES";
                break;
            }
            i=v[i-1]+i;
        }
        cout<<st<<endl;
    }
    return 0;
}
