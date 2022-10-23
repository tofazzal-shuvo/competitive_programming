#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,w, n, sum;
    while(cin>>k>>n>>w)
    {
        sum = ((w*(w+1))/2) * k;
        int remain = sum - n;
        if(remain < 0)cout<<0<<endl;
        else cout<<remain<<endl;
    }
    return 0;
}
