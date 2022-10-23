#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,r;
    while(cin>>k>>r)
    {
        int cnt=1;
        while((k*cnt)%10 != 0 && (k*cnt)%10 != r)cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
