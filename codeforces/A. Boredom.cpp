#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum1=0, sum2=0, mx=0;
        map<int, int>mp;
        map<int, int>::iterator it;

        while(n--)
        {
            int temp;
            cin>>temp;
            mp[temp]++;
            mx=max(mx, temp);
        }

        int i=1;
        while(i<=mx+1)
        {
//            cout<<"s-> "<<mp[i]<<" f-> "<<mp[i+1]<<endl;
            sum1 += (mp[i] * i);
            sum2 += (mp[i+1] * (i+1));
            i+=2;
        }
        cout<<sum1<<" "<<sum2<<endl;
        cout<<max(sum1, sum2)<<endl;
    }
    return 0;
}
