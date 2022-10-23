#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, mx=0, mn=100, mxPosition, mnPosition, cnt=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int crnInput;
        cin>>crnInput;
        if(crnInput>mx)
        {
            mxPosition=i;
            mx=crnInput;
        }
        if(crnInput<=mn)
        {
            mnPosition=i;
            mn=crnInput;
        }
    }
    cnt=mxPosition;
    cnt+=t-mnPosition-1;
    if(mxPosition > mnPosition)cnt--;
    cout<<cnt<<endl;
}
