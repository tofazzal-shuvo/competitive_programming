#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int arr[6];
        arr[0]=a*(b+c);
        arr[1]=(a+b)*c;
        arr[2]=a+b+c;
        arr[3]=a*b*c;
        arr[4]=a+(b*c);
        arr[5]=(a*b)+c;
        int mx = *max_element(arr, arr+6);
        cout<<mx<<endl;
    }
    return 0;
}
