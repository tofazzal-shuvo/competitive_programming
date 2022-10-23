#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        int sz = st.size();
        for(int i=0; i<sz; i++)
        {
            if(i%2==0 || i+1==sz || i+2==sz)cout<<st[i];
        }
        cout<<endl;
    }
    return 0;
}
