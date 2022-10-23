#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int cnt=1;
        while(n!=1)
        {
            if(n%2!=0)
            {
                n--;
                cnt++;
            }
            n/=2;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
