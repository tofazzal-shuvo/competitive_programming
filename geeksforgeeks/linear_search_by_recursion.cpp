#include<bits/stdc++.h>

using namespace std;

int findElement(int arr[], int sz, int key)
{
    if(sz==0)return -1;
    if(arr[sz-1]==key)return sz;

    return findElement(arr, sz-1, key);
}

int main()
{
    int arr[5] = {1,4,7,4,0}, key;
    while(cin>>key)
    {
        int sz = sizeof(arr)/sizeof(arr[0]);
        int idx=findElement(arr, sz, key);
        cout<<idx<<endl;
    }
    return 0;
}
