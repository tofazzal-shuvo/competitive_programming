#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int cnt=0;
        int arr[n][2];
        for(int i=0; i<n; i++)
        {
            int j,k;
            cin>>j>>k;
            arr[i][0]=j;
            arr[i][1]=k;

        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j!=i && arr[i][1] == arr[j][0])cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
