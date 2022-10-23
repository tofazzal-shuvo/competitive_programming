
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        long long int n,q, oddCnt=0,evenCnt=0, oddSum=0, evenSum=0;
        cin>>n>>q;
        while(n--)
        {
            int tm;
            cin>>tm;
            if(tm%2==0)
            {
                evenCnt++;
                evenSum+=tm;
            }
            else
            {
                oddCnt++;
                oddSum+=tm;
            }
        }
        while(q--)
        {
            int tm1, tm2;
            cin>>tm1>>tm2;
            if(tm1==0)
            {
                evenSum+=(evenCnt*tm2);
                if(tm2%2!=0)
                {
                    oddSum+=evenSum;
                    oddCnt+=evenCnt;
                    evenSum=0;
                    evenCnt=0;
                }

            }
            else
            {
                oddSum+=(oddCnt*tm2);
                if(tm2%2!=0)
                {
                    evenCnt+=oddCnt;
                    evenSum+=oddSum;
                    oddSum=0;
                    oddCnt=0;
                }
            }
            cout<<oddSum+evenSum<<endl;
        }
    }
    return 0;
}
