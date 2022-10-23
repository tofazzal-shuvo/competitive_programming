
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, sum1=0,sum2=0;
    cin>>t;
    while(t--)
    {
        int m,c;
        cin>>m>>c;
        if(m>c)sum1++;
        if(m<c)sum2++;
    }
    if(sum1==sum2)cout<<"Friendship is magic!^^"<<endl;
    else if(sum1>sum2)cout<<"Mishka"<<endl;
    else cout<<"Chris"<<endl;

    return 0;
}
