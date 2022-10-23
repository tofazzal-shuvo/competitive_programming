#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt=0, recruits=0;
    cin>>n;
    while(n--){
        int tm;
        cin>>tm;
        if(tm!=-1)recruits += tm;
        else {
            recruits--;
            if(recruits<0)
            {
                recruits=0;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
