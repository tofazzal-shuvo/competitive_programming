
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int testCase, temp;
    cin>>testCase;
    int arr[testCase];
    for(int i=0; i<testCase; i++)
    {
        cin>>temp;
        arr[temp-1]=i+1;
    }
    for(int i=0; i<testCase; i++)
    {
        cout<<arr[i];
        if(i!=testCase-1)cout<<" ";
    }
    return 0;
}

