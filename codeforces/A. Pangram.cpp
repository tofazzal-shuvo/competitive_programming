#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
        set<char>st;
        while(t--)
        {
            char ch;
            cin>>ch;
            ch=tolower(ch);
            st.insert(ch);
        }

        if(st.size()==26)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
