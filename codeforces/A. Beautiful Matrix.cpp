#include<bits/stdc++.h>

using namespace std;

int main()
{
    int stepsNeeded;
    for(int i=1; i<6; i++)
    {
        for(int j=1; j<6; j++)
        {
            int input;
            cin>>input;
            if(input==1)
            {
                stepsNeeded = abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<stepsNeeded<<endl;
    return 0;
}
