#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i=1;
    vector<int>v;
    while(v.size()<1001)
    {
        if(i%3!=0 && i%10 !=3)v.push_back(i);
        i++;
    }
    cin>>t;
    while(t--)
    {
        cin>>i;
        cout<<v[i-1]<<endl;
    }
    return 0;
}
