
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string x, output;
    int second, maxIdx;

    while(cin>>maxIdx>>second>>x)
    {
        output=x;
        for(int j=0; j<second; j++)
        {
            for(int i=1; i < maxIdx; i++)
            {
                if(x[i-1] == 'B' && x[i] == 'G')
                {
                    swap(output[i-1], output[i]);
                }
            }
            x=output;

        }

        cout<<output<<endl;
    }
    return 0;
}
