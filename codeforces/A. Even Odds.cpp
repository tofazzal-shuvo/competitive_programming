
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, k, oddCount;
    while(cin>>n>>k)
    {
        if(n%2!=0)oddCount=n/2 + 1;
        else oddCount=n/2;

        if(oddCount < k)
        {
            k=k-oddCount;
            cout<<2*k<<endl;
        }
        else
        {
            cout<<(2*k)-1<<endl;
        }
    }
}
