#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str, hello="hello";
    while(cin>>str)
    {
        int cnt=0;
        for(int i=0; i<hello.size(); i++)
        {
            int idx = str.find(hello[i]);
            if(idx != -1)
            {
                cnt++;
                str.erase(0, idx+1);
            }
        }

        if(cnt == 5)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
