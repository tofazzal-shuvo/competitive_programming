#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a;
    cin>>t;
    map<int, int>mp;
    while(t--)
    {
        cin>>a;
        mp[a]++;
    }
    int cnt = 0;
    cnt += mp[4];
    int three = mp[3];
    int one = mp[1];
    int two = mp[2] / 2;
    int twoEmpty = mp[2] % 2;
    two += twoEmpty;

//  removing 1 for three
    if(three < one) one=one-three;
    else one=0;

//   removing 1 for 2
    if(twoEmpty*2 < one)one=one-twoEmpty*2;
    else one=0;

    cnt = cnt + three + two + one/4;
    if(one%4 != 0)cnt++;
    cout<<cnt<<endl;

    return 0;
}
