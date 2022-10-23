
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inputCount, maxEnter=0, remain=0;
    cin>>inputCount;
    while(inputCount--)
    {
        int a, b;
        cin>>a>>b;
        remain += b-a;
        maxEnter = max(maxEnter, remain);
    }
    cout<<maxEnter<<endl;
    return 0;
}
