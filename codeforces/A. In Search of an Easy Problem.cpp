
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase,sum=0,input;
    cin>>testCase;
    while(testCase--)
    {
        cin>>input;
        sum+=input;
    }
    if(sum==0)cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return 0;
}

