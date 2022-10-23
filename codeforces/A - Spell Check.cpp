#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name="Timur";
    sort(name.begin(), name.end());
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int chCount;
        cin>>chCount;
        string input;
        cin>>input;
        sort(input.begin(), input.end());
        if(input == name)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

