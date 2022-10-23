
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>::iterator it;
    int t, sum1=0,sum2=0;
    cin>>t;
    while(t--)
    {
        int tm;
        cin>>tm;
        v.push_back(tm);
    }
    int i=1;
    while(!v.empty())
    {
        int temp;
        if(v.size()==1)
        {
            temp=v[0];
            v.pop_back();
        }
        else if(v[0]>v[v.size()-1])
        {
            temp=v[0];
            v.erase(v.begin());
        }
        else
        {
            temp=v[v.size()-1];
            v.pop_back();
        }
//        cout<<"temp-> "<<temp<<endl;
        if(i%2==0)sum2+=temp;
        else sum1+=temp;
        i++;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}
