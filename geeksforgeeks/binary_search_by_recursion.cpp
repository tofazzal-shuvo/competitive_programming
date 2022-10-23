#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int startIdx, int endIdx, int key)
{
    int midIdx = (startIdx+endIdx)/2;
    cout<<midIdx<<" "<<startIdx<<" "<<endIdx<<endl;
    if(arr[startIdx]==key)return midIdx+1;
    if(startIdx==endIdx)return -1;

    if(arr[midIdx]>key)endIdx=midIdx-1;
    else startIdx=midIdx+1;

    return binarySearch(arr, startIdx, endIdx, key);
}

int main()
{
    int arr[]= {1, 4, 5, 6, 6, 8, 9};
    int key;
    while(cin>>key)
    {
        cout<<binarySearch(arr, 0, 6, key)<<endl;
    }
//    while(cin>>key)
//    {
//        int l=0, r=(sizeof(arr)/sizeof(arr[0]))-1, mid, output=-1;
//        while(r-l>-1)
//        {
//            mid=(l+r)/2;
//            if(arr[mid]==key)
//            {
//                output=mid+1;
//                break;
//            }
//            if(arr[mid]>key)
//                r=mid-1;
//            else l=mid+1;
//        }
//
//        cout<<output<<endl;
//    }
    return 0;
}
