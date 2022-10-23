#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inputCount =0, x=0;
    cin>>inputCount;
    while(inputCount--)
    {
        char a, b, c;
        cin>>a>>b>>c;
        if(b=='-')
        {
            x--;
        }
        else
        {
            x++;
        }
    }
    cout<<x<<endl;
    return 0;
}
