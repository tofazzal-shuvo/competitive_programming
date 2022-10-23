#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b;
    while(cin>>n>>m>>a>>b)
    {
        cout<<min((n-((n/m)*m))* a + (n/m)*b, min(n*a, (b + (n/m)*b)))<<endl;
    }
    return 0;
}
