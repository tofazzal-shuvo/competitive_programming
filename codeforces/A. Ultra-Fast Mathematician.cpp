


#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st, st1;
    while(cin>>st>>st1)
    {
        for(int i =0; i< st.size(); i++)
        {
            if(st[i] != st1[i])cout<<'1';
            else cout<<'0';
        }
        cout<<endl;
    }
}
