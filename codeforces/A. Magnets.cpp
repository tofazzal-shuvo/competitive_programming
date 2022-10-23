
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string prevStr="55", crntStr;
    int t, counter=1;
    cin>>t;
    while(t--)
    {
        cin>>crntStr;
        if(crntStr[0] == prevStr[1])counter++;
//        cout<<counter<<" --> "<<crntStr[0]<<" "<<prevStr[1]<<endl;
        prevStr=crntStr;
    }
    cout<<counter<<endl;
    return 0;
}
