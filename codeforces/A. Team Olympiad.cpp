
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>one;
        vector<int>two;
        vector<int>three;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp == 1)one.push_back(i+1);
            else if(temp == 2)two.push_back(i+1);
            else three.push_back(i+1);
        }
        int sz = min(min(one.size(), two.size()), three.size());
        cout<<sz<<endl;
        for(int i=0; i<sz; i++)
        {
            cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
        }
    }
    return 0;
}
