#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int num;
    while(cin>>num)
    {
        int cnt=0;
        while(num)
        {
            if(num%10==4 || num%10==7)cnt++;
            num/=10;
        }
        if(cnt==4 || cnt==7)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
