#include<bits/stdc++.h>

using namespace std;

string convertToString(char* a)
{
    string s=a;
    return a;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string st;
        cin>>st;
        vector<string>v;
        for(int i=0; i<st.size(); i++)
        {
            if(st[i] != '0')
            {
                string temp;
                temp += st[i];
                for(int j=i+1; j<st.size(); j++)
                {
                    temp+="0";
                }
                v.push_back(temp);

            }
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}
