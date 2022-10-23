#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k, sum=0;
        cin>>n>>k;
        vector<int>arr1;
        vector<int>arr2;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            sum+=temp;
            arr1.push_back(temp);
        }
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            arr2.push_back(temp);
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
//        cout<<"sum->"<<sum<<endl;
        while(k--)
        {
//            cout<<arr1[arr1.size()-n]<<" "<<arr2[n-1]<<endl;
            if(arr1[arr1.size()-n]>=arr2[n-1])break;
            sum += (arr2[n-1] - arr1[arr1.size()-n]);
            n--;
        }
        cout<<sum<<endl;
    }

    return 0;
}
