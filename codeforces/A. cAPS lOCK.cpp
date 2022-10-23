#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    while(cin>>st)
    {
        int u=0;
        for(int i=0; i<st.size(); i++)
        {
            if(st[i]<='Z' && st[i]>='A')u++;

        }

        if((u==st.size()) || (st[0]>='a' && st[0]<='z' && u+1 == st.size()))
        {
            for(int i=0; i< st.size(); i++)
            {
                if(st[i]>='a' && i==0)st[i]=st[i]-32;
                else if(st[i]<'a')st[i]=st[i]+32;
            }
            cout<<st<<endl;
        }
        else
        {
            cout<<st<<endl;
        }
    }
    return 0;
}
