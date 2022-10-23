#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<double>a;
    double n, l;
    while(cin>>n>>l)
    {
//        a.push_back(l);
        while(n--)
        {
            double temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        double maxRadious=0;
        if(a[0] != 0)
        {
            maxRadious = a[0];
        }
        for(int i=0; i<a.size()-1; i++)
        {
            double j = (a[i+1]-a[i])/2.0;
            if(j>maxRadious)maxRadious=j;

        }
        if(a.size()>0 && a[a.size()-1] != l)
        {
            int df = l - a[a.size()-1];
            if(df>maxRadious)maxRadious = df;
        }
        cout<<fixed<<maxRadious<<endl;
    }
    return 0;
}
