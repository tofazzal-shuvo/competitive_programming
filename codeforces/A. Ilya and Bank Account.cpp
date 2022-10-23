#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    while(cin>>st)
    {
        if(st[0]!='-')cout<<st<<endl;
        else
        {
            string output="";
            for(int i=0; i<st.size()-2; i++)
            {
                output+=st[i];
            }
            if(st[st.size()-1] < st[st.size()-2])output+=st[st.size()-1];
            else output+=st[st.size()-2];
            cout<<stoi(output)<<endl;

        }
    };
    return 0;
}
