#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        if(t==3)
        {
            cout<<-1<<endl;
            continue;
        }
        if(t%2==0)
        {
            while(t--)
            {
                cout<<t+1;
                if(t!=0)cout<<" ";
            }

            cout<<endl;
        }
        else
        {
            int g=t/2 + 1;
            while(t>g)
            {
                cout<<t<<" ";
                t--;
            }
            int i=1;
            while(i<=g)
            {
                cout<<i;
                if(i!=g)cout<<" ";
                i++;
            }
            cout<<endl;
        }
    }
    return 0;
}
