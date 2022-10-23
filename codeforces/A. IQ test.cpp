#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int oddCnt=0, evenCnt=0, oddIdx=0, evenIdx=0;

        for(int i=1; i<=n; i++)
        {
            int t;
            cin>>t;
            if(t%2==0)
            {
                evenIdx=i;
                evenCnt++;
            }
            else
            {
                oddIdx=i;
                oddCnt++;
            }
        }

        if(evenCnt==1 && oddCnt>1)cout<<evenIdx<<endl;
        else cout<<oddIdx<<endl;
    }
    return 0;
}
