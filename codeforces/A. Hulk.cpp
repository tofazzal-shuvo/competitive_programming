#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            if(i%2==0)cout<<"I hate";
            else cout<<"I love";
            if(n-1==i)cout<<" it"<<endl;
            else cout<<" that ";
        }
    }

    return 0;
}
