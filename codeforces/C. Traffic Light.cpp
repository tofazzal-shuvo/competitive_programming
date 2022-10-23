#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0;
        char ch;
        cin>>n>>ch;
        string st;
        cin>>st;
        st+=st;
        for(int i=0; i<n; i++)
        {
            if(st[i]==ch)
            {
                for(int j=i+1; j<n+n; j++)
                {
                    if(st[j]=='g')
                    {
                        mx= max(j-i, mx);
                        break;
                    }
                }
            }
        }
        if(ch=='g')cout<<0<<endl;
        else cout<<mx<<endl;
    }
    return 0;
}
