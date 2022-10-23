
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, odd, even;
    while(cin>>n)
    {
        if(n%2 != 0)odd = (n/2) + 1;
        else odd=n/2;
        even = n/2;

        even = even * (even + 1);
        odd = odd * odd;
        cout<<even-odd<<endl;
    }
}
