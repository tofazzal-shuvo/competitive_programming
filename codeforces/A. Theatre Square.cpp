#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c;
//    while(cin>>a>>b>>c)
//    {
//        double lenY = ceil(a/c);
//        double lenX = ceil(b/c);
//        long long int output = lenX*lenY;
//        cout<<output<<endl;
//    }
    while(cin>>a>>b>>c)
    {
        double Area = a * b;
        double area = c*c;
        double output = Area/area;
        cout<<output<<endl;
    }
    return 0;
}
