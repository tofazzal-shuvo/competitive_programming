#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    while(cin>>num)
    {
        string output = (num%2 == 0 && num != 2) ? "YES" : "NO";
        cout<<output<<endl;
    }
    return 0;
}
