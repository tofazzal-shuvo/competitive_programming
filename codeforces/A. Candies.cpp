#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=2;
        cin>>n;
        while(true)
        {
            i=pow(2,i-1);
            int tm=((i*(i+1))/2);
            cout<<"i-> "<<i<<" tm-> "<<tm<<endl;

            if(n%tm==0)
            {
                cout<<n/tm<<endl;
                break;
            }
        }
    }
    return 0;
}
