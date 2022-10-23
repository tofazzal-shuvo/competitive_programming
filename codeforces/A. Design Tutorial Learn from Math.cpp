
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=4; i<=n/2; i++)
        {
            int a=n-i;
            if((i%2==0||i%3==0||i%5==0||i%7==0||i%11==0)&&(a%2==0||a%3==0||a%5==0||a%7==0||a%11==0)&&(i!=2&&i!=3&&i!=5&&i!=7&&i!=11 && a!=5&&a!=7&&a!=3&&a!=2&&a!=11))
            {
                cout<<i<<" "<<a<<endl;
                break;
            }
        }
    }
    return 0;
}
