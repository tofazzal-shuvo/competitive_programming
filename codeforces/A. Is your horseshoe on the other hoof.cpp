
#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int>st;
    int n=4;
    while(n--)
    {
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    cout<<4-st.size()<<endl;

    return 0;
}
