
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        set<char>strChar;
        int strLen = str.size();
        while(strLen--)
        {
            strChar.insert(str[strLen]);

        }
        cout<<(strChar.size()%2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!")<<endl;

    }
    return 0;
}
