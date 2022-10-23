#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,mx=0,sm=0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        mx=max(mx, temp);
        sm+=temp;
    }
//    cout<<mx<<" "<<n<<" "<<sm<<endl;
    cout<<(mx*n)-sm<<endl;
    return 0;
}
