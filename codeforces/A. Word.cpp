#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        int lCount=0,
            uCount=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>='A' && str[i]<='Z')uCount++;
            else lCount++;
        }
        if(uCount > lCount)
        {
            transform(str.begin(), str.end(), str.begin(), ::toupper);
            cout<<str<<endl;
        }
        else
        {
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            cout<<str<<endl;
        }
    }
    return 0;
}
