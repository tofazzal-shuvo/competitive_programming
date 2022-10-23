#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        for(int i=0; i<str.size(); i++)
        {
            char ch = str[i];
            if(ch != 'A' && ch-32 != 'A' && ch != 'O' && ch-32 != 'O' && ch != 'Y' && ch-32 != 'Y'  && ch != 'E' && ch-32 != 'E' && ch != 'U' && ch-32 != 'U' && ch != 'I' && ch-32 != 'I')
            {
                if(ch<97)
                {
                    ch=ch+32;
                    cout<<'.'<<ch;
                }
                else
                {
                    cout<<'.'<<ch;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
