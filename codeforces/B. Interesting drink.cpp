#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>::iterator upper;
    int t;
    cin>>t;
    while(t--)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
    sort(v.begin(), v.end());
    int day;
    cin>>day;
    while(day--)
    {
        int temp;
        cin>>temp;
        upper = upper_bound(v.begin(), v.end(), temp);
        cout<<upper-v.begin()<<endl;
    }

    return 0;
}
