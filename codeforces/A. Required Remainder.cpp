#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        cout<<((n-y)/x)*x+y<<endl;
//        int d = n/x;
//        do
//        {
//            if((d*x)+y<=n)
//            {
//                cout<<(x*d)+y<<endl;
//                break;
//            }
//        }
//        while(d--);
    }
    return 0;
}
