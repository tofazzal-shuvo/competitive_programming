#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        if(str.find('H') != -1 || str.find('Q') != -1 || str.find('9') != -1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
