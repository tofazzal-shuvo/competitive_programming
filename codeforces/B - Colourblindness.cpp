#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int a;
        cin>>a;
        string st, st1;
        cin>>st>>st1;
        replace(st.begin(), st.end(), 'G','B');
        replace(st1.begin(), st1.end(), 'G','B');
        if(st==st1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

