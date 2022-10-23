#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, cnt=0;
        cin>>a>>b;
        int absNum = abs(a-b);
        cnt = absNum/10;
//        cout<<"abs "<<absNum<<endl;
        if(absNum%10 != 0)cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
