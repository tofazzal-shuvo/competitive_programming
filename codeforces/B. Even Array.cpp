
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, odd=0, even=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(i%2==0 && temp%2!=0)even++;
            else if(i%2==1 && temp%2!=1)odd++;
        }
//        cout<<odd<<" "<<even<<endl;
        if(odd!=even)cout<<-1<<endl;
        else cout<<even<<endl;
    }

    return 0;
}
