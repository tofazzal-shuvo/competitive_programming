#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int num;
        int cnt=2, sq=sqrt(num);
        cin>>num;
        for(int i=2; i <= sq; i++)
        {
            if(num%i==0)cnt++;
            if(cnt>3)break;
        }
        if(cnt==3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
