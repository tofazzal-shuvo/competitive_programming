#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, cnt=0, prevNum=0, mxCnt=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(prevNum <= a)cnt++;
        else cnt=1;

        prevNum=a;
        mxCnt=max(mxCnt, cnt);
    }
    cout<<mxCnt<<endl;
    return 0;
}
