#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>st;
    int lavel, p=2;
    cin>>lavel;
    while(p--)
    {
        int t;
        cin>>t;
        while(t--)
        {
            int temp;
            cin>>temp;
            st.insert(temp);
        }
    }
    if(st.size()==lavel)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
