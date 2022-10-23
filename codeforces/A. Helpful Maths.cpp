#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<char>vect;
    char ch;
    while(scanf("%c", &ch))
    {
        if ( ch == EOF || ch == '\n' )
        {
            break;
        }
        else if(ch!='+')
        {
            vect.push_back(ch);
        }
    }
    sort(vect.begin(), vect.end());
    for(int i=0; i<vect.size(); i++)
    {
        cout<<vect[i];
        if(i+1 == vect.size())
        {
            cout<<endl;
        }
        else
        {
            cout<<"+";
        }
    }
    return 0;
}
