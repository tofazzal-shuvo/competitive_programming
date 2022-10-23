#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inputCount;
    while(cin>>inputCount)
    {
        char ch;
        int antonCount=0, danikCount=0;
        while(inputCount--)
        {
            cin>>ch;
            if(ch=='A')antonCount++;
            else danikCount++;
        }
        if(antonCount>danikCount)
        {
            cout<<"Anton"<<endl;
        }
        else if(antonCount<danikCount)
        {
            cout<<"Danik"<<endl;

        }
        else
        {
            cout<<"Friendship"<<endl;
        }
    }
    return 0;
}
