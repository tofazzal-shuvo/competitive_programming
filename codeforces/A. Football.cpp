
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int cnt=1;
        for(int i=1; i<str.size(); i++)
        {
            if(str[i]==str[i-1])cnt++;
            else if(cnt<7) cnt=1;
        }
        if(cnt>6)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
