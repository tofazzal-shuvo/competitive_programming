#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, flag=0;
        cin>>n;
        string st, ans="YES";
        cin>>st;
        for(int i=0; i<n-1; i++)
        {
            if(st[i]!=st[i+1])
            {
                for(int j=i+1; j<n; j++)
                {
                    if(st[j]==st[i])
                    {
                        ans="NO";
                        flag=1;
                        break;
                    }
                }

            }
            if(flag==1)break;
        }
        cout<<ans<<endl;
    }

    return 0;
}

