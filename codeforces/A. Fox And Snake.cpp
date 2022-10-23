#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    while(cin>>r>>c)
    {
        for(int i=1; i<=r; i++)
        {
            if(i%2!=0)
            {
                printf("%s", string(c, '#').c_str());
                cout<<endl;
            }
            else if((i/2)%2 == 1)
            {
                printf("%s", string(c-1, '.').c_str());
                cout<<"#"<<endl;
            }
            else
            {
                cout<<"#";
                printf("%s", string(c-1, '.').c_str());
                cout<<endl;
            }

        }
    }
    return 0;
}
