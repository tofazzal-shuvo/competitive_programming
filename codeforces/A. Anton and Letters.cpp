#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    set<char>st;
    while(cin>>ch)
    {
        if(ch=='}')break;
        else if(ch>='a'&&ch<='z')st.insert(ch);
    }
    cout<<st.size()<<endl;
    return 0;
}
