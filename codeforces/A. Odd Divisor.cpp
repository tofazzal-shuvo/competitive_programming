#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int sq=sqrt(n), cnt=0;
        if(n%2==1)cnt++;
//        cout<<"sq-> "<<sq<<endl;
        for(int i=2; i<=sq; i++)
        {
            if(n%i==0)
            {
                if(i%2==1)cnt++;
                if(n/i!=i && (n/i)%2==1 )cnt++;
            }
        }
//        cout<<"cnt-> "<<cnt<<endl;
        if(cnt%2==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
