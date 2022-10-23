
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int coins;
    while(cin>>coins)
    {
        int arr[coins], total=0, subTotal=0, coinCount=0;
        for(int i=0; i<coins; i++)
        {
            int coin;
            cin>>coin;
            arr[i]=coin;
            total+=coin;
        }
        sort(arr, arr + coins);

        for(int i=coins-1; i>=0; i--)
        {
            if(subTotal>total/2)break;
            subTotal+=arr[i];
            coinCount++;
        }
        cout<<coinCount<<endl;
    }
    return 0;
}

