#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inputCount;
    cin>>inputCount;
    while(inputCount--)
    {
        string str;
        cin>>str;
        int len = str.size();
        string strLen = to_string(len-2);
        if(len>10)
        {
            cout<<str[0] + strLen + str[len-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
//        if(len<10)
//        {
//            cout<<str<<endl;
//
//        }
//        else
//        {
//            cout<<str[0];
//            cout<<len-1;
//            cout<<str[len-1]<<endl;
//        }

    }
    return 0;
}
