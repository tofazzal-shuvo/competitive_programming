#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase;
    while(cin>>testCase)
    {
        int counter=0, p,q;
        while(testCase--)
        {
            cin>>p>>q;
            if(p+2<=q)counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}

