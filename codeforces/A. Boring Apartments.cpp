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
        int digit=int(st[0]-'0');
        int sz=st.size();
        cout<<((digit-1)*10)+((sz*(sz+1))/2)<<endl;
    }
    return 0;
}
