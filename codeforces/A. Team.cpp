#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inputCount, solutionCounter=0;
    while( cin>>inputCount)
    {
        while(inputCount--)
        {
            int a,b,c=0;
            cin>>a>>b>>c;
            if(a+b+c > 1)
            {
                solutionCounter++;
            }
        }
        cout<<solutionCounter<<endl;
    }
    return 0;
}
