#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int n=(log(b)-log(a))/log(1.5);
        cout<<n+1<<endl;
//        for(int i=1; i<100; i++)
//        {
//            a=a*3*i;
//            b=b*2*i;
//            if(a >b )
//            {
//                cout<<i<<endl;
//                break;
//            }
//        }
    }
    return 0;
}
