#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int cnt=0, cnt1=0;
        k=240-k;
        for(int i=1; i<=n; i++)
        {
            if(((i*5)+cnt) <= k)cnt += (i*5);
            else break;
            cnt1++;
        }
        cout<<cnt1<<endl;
    }
    return 0;
}
