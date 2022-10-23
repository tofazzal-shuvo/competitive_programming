#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        cout<<(a*2 >= b ? (a*a*4):(b*b))<<endl;
    }
    return 0;
}
