#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st, st1="WUB";

    while(cin>>st)
    {
        regex p("WUB");
        cout<<regex_replace(st, p, " ")<<endl;
//        for(int i=0; i< st.size(); i++)
//        {
//            if(st[i]=='W')
//            {
//                string sub="";
//                for(int j=i; j<st.size() && j<i+3; j++)
//                {
//                    sub+=st[j];
//                }
//                if(sub == st1)
//                {
//                    st.erase( i, 3 );
//                    st.insert( i, " " );
//                }
//            }
//        }
//        cout<<st<<endl;
    }
    return 0;
}
