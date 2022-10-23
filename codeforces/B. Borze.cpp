#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    while(cin>>st)
    {
        int i=0, sz=st.size();
        while(i<sz)
        {
            if(i+1<sz && st[i]=='-' && st[i+1]=='-')
            {
                cout<<2;
                i+=2;
            }
            else if(i+1<sz && st[i]=='-' && st[i+1]=='.')
            {
                cout<<1;
                i+=2;
            }
            else
            {
                cout<<0;
                i+=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
