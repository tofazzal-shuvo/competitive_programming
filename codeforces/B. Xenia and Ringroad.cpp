#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,t;

    while(cin>>n>>t)
    {
        long long int total=0,crnt=0, prev=1;
        while(t--)
        {
            cin>>crnt;
            if(crnt<prev)
            {
                total=total + (n-prev) + crnt;
                prev=crnt;
            }
            total=total+(crnt-prev);
            prev=crnt;
        }
        cout<<total<<endl;
    }
    return 0;
}
